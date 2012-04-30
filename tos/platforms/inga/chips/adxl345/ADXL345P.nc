/*
 * Copyright (c) 2009 DEXMA SENSORS SL
 * Copyright (c) 2011 ZOLERTIA LABS
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 *
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the
 *   distribution.
 *
 * - Neither the name of the copyright holders nor the names of
 *   its contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*
 * Implementation of ADXL345 accelerometer, as a part of Zolertia Z1 mote
 *
 * Credits goes to DEXMA SENSORS SL
 * @author: Xavier Orduna <xorduna@dexmatech.com>
 * @author: Jordi Soucheiron <jsoucheiron@dexmatech.com>
 * @author: Antonio Linan <alinan@zolertia.com>
 */

#include "ADXL345.h"

module ADXL345P {
  provides {
	interface SplitControl;
	interface Read<adxl345_readxyt_t> as XYZ;
  }
  uses {
	interface Resource;
	interface SpiByte;
	interface Set<uint8_t> as ChipSelect;
	interface Atm128Spi as SPI; // needs raw SPI to set up clock phase and polarity
  }

}
implementation {
  norace bool lock=FALSE;
  norace uint8_t adxlcmd;
  norace error_t error_return= SUCCESS;
  norace adxl345_readxyt_t xyz_axis;

  command error_t SplitControl.start() {
	error_t e;
	if(lock) return EBUSY;
	lock = TRUE;

	call ChipSelect.set(2);  // second chip on SPI bus (INGA specific)
	call SPI.setClockPolarity(TRUE);
	call SPI.setClockPhase(TRUE);
	call SPI.setClock(0);
	call SPI.enableSpi(TRUE);

	adxlcmd = ADXLCMD_START;
	e = call Resource.request();
	if (e==SUCCESS) {
	  return SUCCESS;
	}
	lock = FALSE;
	return e;
  }

  command error_t SplitControl.stop(){
    // FIXME
    return SUCCESS;
  }

  command error_t XYZ.read(){
	error_t e;
	if(lock) return EBUSY;
	lock = TRUE;

	call ChipSelect.set(2);  // second chip on SPI bus (INGA specific)

	adxlcmd = ADXLCMD_READ_XYZ;
	e = call Resource.request();
	if (e==SUCCESS) return SUCCESS;
	lock = FALSE;
	return e;
  }

  void writeByte(uint8_t reg, uint8_t dat) {
	call SpiByte.write(reg & 0x7f);
	call SpiByte.write(dat);
  }

  uint8_t readByte(uint8_t reg) {
	call SpiByte.write(reg | 0x80);
	return call SpiByte.write(0xff);
  }

  event void Resource.granted(){
	switch(adxlcmd) {
		case ADXLCMD_READ_XYZ:
			xyz_axis.x_axis = readByte(ADXL345_DATAX0) + ((uint16_t) readByte(ADXL345_DATAX0 + 1) << 8);
			xyz_axis.y_axis = readByte(ADXL345_DATAY0) + ((uint16_t) readByte(ADXL345_DATAY0 + 1) << 8);
			xyz_axis.z_axis = readByte(ADXL345_DATAZ0) + ((uint16_t) readByte(ADXL345_DATAZ0 + 1) << 8);

			signal XYZ.readDone(error_return, xyz_axis);
			call Resource.release();
			lock = FALSE;
			break;

		case ADXLCMD_START:
			writeByte(ADXL345_DATAFORMAT, 0x00);
			writeByte(ADXL345_POWER_CTL, 0x08);
			writeByte(ADXL345_BW_RATE, 0x0a);

			if (readByte(ADXL345_DEVID) != 0xe5) {
				error_return = EOFF;
			} else {
				error_return = SUCCESS;
			}

			call Resource.release();
			lock = FALSE;
			signal SplitControl.startDone(error_return);
			break;
	}
  }

  default event void XYZ.readDone(error_t error, adxl345_readxyt_t data){
	return;
  }

  // dummy
  async event void SPI.dataReady(uint8_t d) {}
}
