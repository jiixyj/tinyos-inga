
/*
 * Copyright (c) 2007 Intel Corporation
 * All rights reserved.
 *
 * This file is distributed under the terms in the attached INTEL-LICENSE     
 * file. If you do not find these files, copies can be found by writing to
 * Intel Research Berkeley, 2150 Shattuck Avenue, Suite 1300, Berkeley, CA, 
 * 94704.  Attention:  Intel License Inquiry.
 */

/*
 * Copyright (c) 2007, Vanderbilt University
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the
 *   distribution.
 * - Neither the name of the copyright holder nor the names of
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
 *
 */
 
/**
 * Build a 32-bit alarm and counter from the atmega1284's 8-bit timer 2
 * in asynchronous mode. Attempting to use the generic Atm128AlarmC
 * component and the generic timer components runs into problems
 * apparently related to letting timer 2 overflow.
 * 
 * So, instead, this version (inspired by the 1.x code and a remark from
 * Martin Turon) directly builds a 32-bit alarm and counter on top of timer 2
 * and never lets timer 2 overflow.
 *
 * @author David Gay
 * @author Janos Sallai <janos.sallai@vanderbilt.edu>
 * @author Martin Cerveny
 */

generic configuration Atm128AlarmAsyncC(typedef precision, int divider) {
  provides {
    interface Init @atleastonce();
    interface Alarm<precision, uint32_t>;
    interface Counter<precision, uint32_t>;
  }
}
implementation
{
  components new Atm1284AlarmAsyncP(precision, divider),
    HplAtm1284Timer2AsyncC;

  Init = Atm1284AlarmAsyncP;
  Alarm = Atm1284AlarmAsyncP;
  Counter = Atm1284AlarmAsyncP;

  Atm1284AlarmAsyncP.Timer -> HplAtm1284Timer2AsyncC;
  Atm1284AlarmAsyncP.TimerCtrl -> HplAtm1284Timer2AsyncC;
  Atm1284AlarmAsyncP.Compare -> HplAtm1284Timer2AsyncC;
  Atm1284AlarmAsyncP.TimerAsync -> HplAtm1284Timer2AsyncC;
}
