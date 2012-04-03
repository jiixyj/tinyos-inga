/*
 * Copyright (c) 2012 Martin Cerveny
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the
 *   distribution.
 * - Neither the name of INSERT_AFFILIATION_NAME_HERE nor the names of
 *   its contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL STANFORD
 * UNIVERSITY OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/**
 * Commands for controlling platform coprocessor (atmega3290) via Uart0 (SIPC - serial inter-platform communication).
 *
 *  @author Martin Cerveny
 */ 

#include "inga.h"

module IngaP @safe() {
	provides interface Inga;
	provides interface Init as SoftwareInit;

	uses interface UartStream;
	uses interface StdControl as UartCtl;
}

implementation {

	command error_t SoftwareInit.init() {
		call UartCtl.start();
		return SUCCESS;
	}

	async event void UartStream.sendDone(uint8_t * buf, uint16_t len, error_t error) {
	}

	async event void UartStream.receivedByte(uint8_t byte) {
	}

	async event void UartStream.receiveDone(uint8_t * buf, uint16_t len, error_t error) {
	}

	command error_t Inga.msg(const char * msg) {
		call UartStream.send((unsigned char *) msg, strlen(msg));
		return SUCCESS;
	}
}
