/*
* Copyright (c) 2011, University of Szeged
* All rights reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions
* are met:
*
* - Redistributions of source code must retain the above copyright
* notice, this list of conditions and the following disclaimer.
* - Redistributions in binary form must reproduce the above
* copyright notice, this list of conditions and the following
* disclaimer in the documentation and/or other materials provided
* with the distribution.
* - Neither the name of University of Szeged nor the names of its
* contributors may be used to endorse or promote products derived
* from this software without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
* "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
* LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
* FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
* COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
* INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
* (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
* SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
* HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
* STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
* ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
* OF THE POSSIBILITY OF SUCH DAMAGE.
*
* Author: Zsolt Szabo
*/


module HplAtm1284Usart1SpiP {
  provides interface Atm128Spi as SPI;
  provides interface McuPowerOverride;
  uses {
    interface GeneralIO as SS;
    interface GeneralIO as SCK;
    interface GeneralIO as MOSI;
    interface GeneralIO as MISO;
    interface McuPowerState as Mcu;
  }
}
implementation {

  async command void SPI.initMaster() {
    call SPI.setClock(0);
    call SCK.makeOutput();    
    call SS.makeOutput();
    call SS.set();
    call MOSI.makeOutput();
    call MISO.makeInput();
    call SPI.setMasterBit(TRUE);
  }

  async command void SPI.initSlave() {
    //dummy
    call SPI.initMaster();
  }

  async command void SPI.sleep() {
  //    call SS.set();	// why was this needed?
  }

  async command uint8_t SPI.read()        { return UDR1; }
  async command void SPI.write(uint8_t d) { UDR1 = d; }

  default async event void SPI.dataReady(uint8_t d) {}
  AVR_ATOMIC_HANDLER(USART1_UDRE_vect) {
      signal SPI.dataReady(call SPI.read());
  }

   async command bool SPI.isInterruptPending() {
    return READ_BIT(UCSR1A, RXC1);
  }

  async command bool SPI.isInterruptEnabled () {                
    return READ_BIT(UCSR1B, UDRIE1); // FIXME: not sure about UDRIE1
  }

  async command void SPI.enableInterrupt(bool enabled) {
    if (enabled) {
      SET_BIT(UCSR1B, UDRIE1);
      call Mcu.update();
    }
    else {
      CLR_BIT(UCSR1B, UDRIE1);
      call Mcu.update();
    }
  }

  async command bool SPI.isSpiEnabled() {
    return (UCSR1B & (1 << RXEN1 | 1 << TXEN1))?TRUE:FALSE;
  }
  
  async command void SPI.enableSpi(bool enabled) {
    if (enabled) {
      UCSR1B |= (1 << RXEN1) | (1 << TXEN1) /*| (1<<RXCIE0)*/;
      call SPI.setClock(3); 
      call Mcu.update();
    }
    else {
      UCSR1B &= ~((1 << RXEN1) | (1 << TXEN1) /*| (1<<RXCIE0)*/);
      call Mcu.update();
    }
  }

  /* UDORD bit */
  async command void SPI.setDataOrder(bool lsbFirst) {
    // dummy, no UDORD1 available in compiler
  }
  
  async command bool SPI.isOrderLsbFirst() {
    return TRUE;
  }

  /* MSTR bit */
  async command void SPI.setMasterBit(bool isMaster) {
    /* Only for backward compatibility */
    UCSR1C = (1<<UMSEL11) | (1<<UMSEL10);
  }
  async command bool SPI.isMasterBitSet() {
    return TRUE; // Hence this mode only provides master mode operation 
  }

 /* UCPOL bit */
  async command void SPI.setClockPolarity(bool highWhenIdle) {
    // leave alone for INGA
  }
  
   async command bool SPI.getClockPolarity() {
    return READ_BIT(UCSR1C, UCPOL1);
  }

   /* UCPHA bit */
  async command void SPI.setClockPhase(bool sampleOnTrailing) {
    // leave alone for INGA
  }
  async command bool SPI.getClockPhase() {
    // dummy, leave alone for INGA
    return TRUE;
  }

  async command uint8_t SPI.getClock () {                
    return PLATFORM_MHZ * 1000000 / (2* UBRR1 +1);
  }
  
  async command void SPI.setClock (uint8_t Kbps) {
    if(Kbps == 0) UBRR1 = 0; else
    UBRR1 = (((uint32_t)PLATFORM_MHZ * 1000000) / (2 * (uint32_t)Kbps * 1000)) - 1;
  }

  async command bool SPI.hasWriteCollided() {
    return FALSE; //dummy
  }

  async command bool SPI.isMasterDoubleSpeed() {
    return FALSE; //dummy
  }

  async command void SPI.setMasterDoubleSpeed(bool on) {
   //dummy
  }

  async command mcu_power_t McuPowerOverride.lowestState() {
		if( (UCSR1B & (1 << RXEN1 | 1 << TXEN1)) && (UCSR1C & (1 << UMSEL11 | 1<< UMSEL10)) ) {
			return ATM128_POWER_IDLE;
		}
		else
			return ATM128_POWER_DOWN;
	}
}
