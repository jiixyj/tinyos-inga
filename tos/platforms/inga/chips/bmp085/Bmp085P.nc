/*
 * Copyright (c) 2010, Shimmer Research, Ltd.
 * All rights reserved
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:

 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 *       copyright notice, this list of conditions and the following
 *       disclaimer in the documentation and/or other materials provided
 *       with the distribution.
 *     * Neither the name of Shimmer Research, Ltd. nor the names of its
 *       contributors may be used to endorse or promote products derived
 *       from this software without specific prior written permission.

 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 *
 * @author Steve Ayer
 * @date November, 2010
 *
 * driver for bosch bmp085 pressure sensor module (port from tos-1.x)
 */

module Bmp085P {
  provides {
    interface SplitControl;
    interface PressureSensor;
  }
  uses {
    interface I2CPacket<TI2CBasicAddr> as I2CPacket;
    interface Resource as I2CResource;
    interface BusyWait<TMicro,uint16_t> as BusyWait;
  }
}

implementation {
  extern int sprintf(char *str, const char *format, ...) __attribute__ ((C));
  extern int snprintf(char *str, size_t len, const char *format, ...) __attribute__ ((C));

  uint8_t readbuff[22];
  norace uint8_t bytesToRead, bytesRead; // both protected by "busy"
  uint8_t regToRead;
  uint8_t packet[2];

  int16_t calibration_vars[11];
  #define AC1 (calibration_vars[ 0])
  #define AC2 (calibration_vars[ 1])
  #define AC3 (calibration_vars[ 2])
  #define AC4 ((uint16_t) calibration_vars[ 3])
  #define AC5 ((uint16_t) calibration_vars[ 4])
  #define AC6 ((uint16_t) calibration_vars[ 5])
  #define  B1 (calibration_vars[ 6])
  #define  B2 (calibration_vars[ 7])
  #define  MB (calibration_vars[ 8])
  #define  MC (calibration_vars[ 9])
  #define  MD (calibration_vars[10])

  // sensing mode
  uint8_t oss = 3;  // default is ultra high res

  // calculation vars
  int32_t x1, x2, x3, b3, b5, b6, press;
  uint32_t b4, b7, up, ut;
  int16_t temp;

  error_t errcode;

  enum {
    OFF,
    STARTING,
    ON
  };

  bool operatingState = OFF;
  bool busy = FALSE;

  task void read_calibration_data() {
    regToRead = 0xaa;
    bytesToRead = 22;

    call I2CResource.request();
  }

  command error_t SplitControl.start() {
    atomic {
      if (operatingState == OFF) {
        operatingState = STARTING;
      } else if (operatingState == STARTING) {
        return SUCCESS;
      } else {
        return EALREADY;
      }
    }

    post read_calibration_data();

    return SUCCESS;
  }

  command error_t SplitControl.stop() {
    signal SplitControl.stopDone(SUCCESS);
    return SUCCESS;
  }

  error_t errcode;

  error_t writeReg(uint8_t reg_addr, uint8_t val,
                   uint8_t reg_to_read, uint8_t bytes_to_read) {
    atomic {
      if (busy) return EBUSY;
      else       busy = TRUE;
    }

    packet[0] = reg_addr;
    packet[1] = val;

    regToRead = reg_to_read;
    bytesToRead = bytes_to_read;

    errcode = call I2CResource.request();
    printf("request i2c%d\n", (int) errcode);

    return SUCCESS;
  }

  command error_t PressureSensor.readTemperature() {
    return writeReg(0xf4, 0x2e, 0xf6, 2);
  }

  command error_t PressureSensor.readPressure(){
    return writeReg(0xf4, 0x34 + (oss << 6), 0xf6, 3);
  }

  task void calc_temp() {
    x1 = (ut - AC6) * AC5 >> 15;
    x2 = ((int32_t)MC  << 11) / (x1 + (int32_t)MD);
    b5 = x1 + x2;
    temp = (b5 + 8) >> 4;

    signal PressureSensor.tempAvailable(temp);
  }

  task void calc_press() {
    b6 = b5 - 4000;
    x1 = (int32_t)B2 * (b6 * b6 >> 12) >> 11;
    x2 = (int32_t)AC2 * b6 >> 11;
    x3 = x1 + x2;
    b3 = (((((int32_t)AC1 << 2) + x3) << oss) + 2) >> 2;
    x1 = (int32_t)AC3 * b6 >> 13;
    x2 = (int32_t)B1 * (b6 * b6 >> 12) >> 16;
    x3 = (x1 + x2 + 2) >> 2;
    b4 = ((uint32_t) AC4 * (uint32_t) (x3 + 32768u)) >> 15;
    b7 = (uint32_t)(up - b3) * (50000u >> oss);

    if(b7  < 0x80000000UL)
      press = (b7 << 1) / b4;
    else
      press = b7 / b4 << 1;
    x1 = (press >> 8) * (press >> 8);
    x1 = x1 * 3038 >> 16;
    x2 = -7357 * press >> 16;

    press = press + ((x1 + x2 + 3791) >> 4);

    signal PressureSensor.pressAvailable(press);
  }

  task void collect_data() {
    // temp
    if (bytesRead == 2) {
      ut = (readbuff[0] << 8) | readbuff[1];
      post calc_temp();
    }
    // pressure
    else if (bytesRead == 3) {
      up = ((uint32_t) readbuff[0] << 16 | readbuff[1] <<  8 | readbuff[2])
           >> (8 - oss);
      post calc_press();
    }
    // calibration
    else if (bytesRead == 22) {
      register uint8_t i;

      for (i = 0; i < 11; ++i) {
        calibration_vars[i] = (readbuff[i*2] << 8) | readbuff[i*2+1];
      }
      atomic {
        operatingState = ON;
        busy = FALSE;
      }
      signal SplitControl.startDone(SUCCESS);
      return;
    }

    atomic busy = FALSE;

  }

  /*
   * 0 = ultra low power; power ~3uA, conversion time 4.5ms
   * 1 = standard       ; power ~5uA, conversion time 7.5ms
   * 2 = high res       ; power ~7uA, conversion time 13.5ms
   * 3 = ultra high res ; power ~12uA, conversion time 25.5ms
   */
  command void PressureSensor.setSensingMode(uint8_t mode){
    oss = mode;
  }

  async event void I2CPacket.readDone(error_t _success, uint16_t _addr, uint8_t _length, uint8_t* _data) { 
    bytesRead = _length;
    memcpy(readbuff, _data, _length);

    call I2CResource.release();
    post collect_data();
  }

  async event void I2CPacket.writeDone(error_t _success, uint16_t _addr, uint8_t _length, uint8_t* _data) { 
    static bool read_next = FALSE;

    if (read_next || operatingState == STARTING) {
      call I2CPacket.read(I2C_START | I2C_STOP, 0x77, bytesToRead, readbuff);
      read_next = FALSE;
    } else {

      if (bytesToRead == 2) {               // reading temperature
        call BusyWait.wait(4500);
      } else {                              // reading pressure
        switch (oss) {
        case 0: call BusyWait.wait( 4500); break;
        case 1: call BusyWait.wait( 7500); break;
        case 2: call BusyWait.wait(13500); break;
        case 3: call BusyWait.wait(25500); break;
        }
      }

      read_next = TRUE;
      call I2CPacket.write(I2C_START | I2C_STOP, 0x77, 1, &regToRead);
    }
  }

  event void I2CResource.granted() {
    if (operatingState == STARTING) {  // read calibration data
      call I2CPacket.write(I2C_START | I2C_STOP, 0x77, 1, &regToRead);
    } else {                           // read temperature/pressure data
      call I2CPacket.write(I2C_START | I2C_STOP, 0x77, 2, packet);
    }
  }

  default event void SplitControl.startDone(error_t error) { }
  default event void SplitControl.stopDone(error_t error) { }

}
