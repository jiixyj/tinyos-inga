/*
 * @author Jan Kokemüller
 * @date   April, 2012
 */

#include "printf.h"
#include <UserButton.h>

module AccelIngaC @safe()
{
  uses interface Timer<TMilli> as Timer0;
  uses interface Leds;
  uses interface Boot;
  uses interface LocalIeeeEui64 as Eui64;

  uses interface Get<button_state_t> as UserButtonGet;
  uses interface Notify<button_state_t> as UserButtonNotify;

  uses interface AccelSensor;
  uses interface SplitControl as AccelSensorControl;
}

implementation
{
  event void Boot.booted()
  {
    printf("booted!\n");
    printfflush();
    call AccelSensorControl.start();
  }

  event void AccelSensorControl.startDone(error_t error)
  {
    call Timer0.startPeriodic( 1000 );
    call UserButtonNotify.enable( );
  }

  event void Timer0.fired()
  {
    // call AccelSensor.readTemperature();
    call Leds.led0Toggle();
  }

  error_t errcode;

  event void UserButtonNotify.notify(button_state_t state) {
    if (state) {
      errcode = call AccelSensor.readTemperature();
      printf("temp errcode: %d", (int) errcode);
      errcode = call AccelSensor.readAccel();
      printf(", pres errcode: %d\n", (int) errcode);
      printfflush();
    }
  }

  event void AccelSensor.tempAvailable(int16_t data) {
    printf("got temp %"PRIi16"\n", data);
    printfflush();
  }

  event void AccelSensor.pressAvailable(int32_t data) {
    printf("got press %"PRIi32"\n", data);
    printfflush();
  }

  event void AccelSensorControl.stopDone(error_t error) { }

}

