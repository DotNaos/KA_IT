#include <Arduino.h>
#include <HardwareTimer.h>

HardwareTimer* timer = new HardwareTimer(TIM2);


void update()
{
  // do something

}

void initTimer()
{
  timer->setPrescaleFactor(32000);
  timer->setOverflow(1, HERTZ_FORMAT);
  timer->attachInterrupt(update);
  timer->resume();
}

