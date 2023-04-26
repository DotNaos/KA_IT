#include <Arduino.h>
#include <HardwareTimer.h>

HardwareTimer timer = HardwareTimer(TIM2);

void timerCallback()
{
  digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));
}

void configureTimer()
{
  timer.setMode(1, TIMER_OUTPUT_COMPARE, PA0);
  timer.setOverflow(1000000, HERTZ_FORMAT);
  timer.attachInterrupt(1, timerCallback);
  timer.refresh();
  timer.resume();
}
