#include "printf.h"

#include <UserButton.h>

module PressureIngaC @safe()
{
  uses interface Timer<TMilli> as Timer0;
  uses interface Leds;
  uses interface Boot;
  uses interface LocalIeeeEui64 as Eui64;

  uses interface Get<button_state_t> as UserButtonGet;
  uses interface Notify<button_state_t> as UserButtonNotify;
}
implementation
{
  event void Boot.booted()
  {
    call Timer0.startPeriodic( 100 );
    call UserButtonNotify.enable( );
  }

  event void Timer0.fired()
  {
    printf("timer fired %d!\n", call UserButtonGet.get());
    printfflush();
    call Leds.led0Toggle();
  }

  event void UserButtonNotify.notify(button_state_t state) {
    printf("button pressed! %d\n", state);
    printfflush();
  }

}

