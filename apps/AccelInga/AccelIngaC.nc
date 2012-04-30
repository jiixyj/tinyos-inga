/*
 * @author Jan Kokemüller
 * @date   April, 2012
 */

#include "printf.h"
#include "ADXL345.h"
#include <UserButton.h>

module AccelIngaC @safe()
{
  uses interface Timer<TMilli> as Timer0;
  uses interface Leds;
  uses interface Boot;
  uses interface LocalIeeeEui64 as Eui64;

  uses interface Get<button_state_t> as UserButtonGet;
  uses interface Notify<button_state_t> as UserButtonNotify;

  uses interface Read<adxl345_readxyt_t> as XYZ;
  uses interface SplitControl as AccelControl;
}

implementation
{
  event void Boot.booted()
  {
    printf("booted!\n");
    printfflush();
    call AccelControl.start();
  }

  event void AccelControl.startDone(error_t error)
  {
    if (error != SUCCESS) {
        call AccelControl.start();
    }
    call Timer0.startPeriodic( 100 );
    call UserButtonNotify.enable( );
  }

  event void Timer0.fired()
  {
    call XYZ.read();
  }

  error_t errcode;

  event void UserButtonNotify.notify(button_state_t state) {
    if (state) {
      call Leds.led0Toggle();
    }
  }

  event void XYZ.readDone(error_t result, adxl345_readxyt_t data) {
    printf("got xyz %"PRIi16" %"PRIi16" %"PRIi16"\n",
           (int16_t) data.x_axis, (int16_t) data.y_axis, (int16_t) data.z_axis);
    printfflush();
  }

  event void AccelControl.stopDone(error_t error) { }
}

