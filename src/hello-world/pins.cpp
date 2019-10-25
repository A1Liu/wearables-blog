#include "pins.h"
#include <avr/sleep.h>
#include <avr/wdt.h>

PinMode pin_modes[5];
PinEventType event_type[5];

void setup_listeners() {
  for (int i = 0; i < 5; i++) {
    if (digitalRead(i) == HIGH) {
      event_type[i] = PinEventType::PinUp;
    } else {
      event_type[i] = PinEventType::PinDown;
    }
  }
}

void pinMode(int pin, PinMode p) {
  if (pin < 0 || pin >= 5) // TODO Should error out here
    pin = 0;

  if (p == PinMode::Input) {
    pin_modes[pin] = PinMode::Input;
    pinMode(pin, INPUT);
  } else {
    pin_modes[pin] = PinMode::Output;
    pinMode(pin, OUTPUT);
  }
}

PinEvent listen_for_event(unsigned long wait_time) {

  set_sleep_mode(SLEEP_MODE_PWR_DOWN);
  sleep_enable();
  sleep_cpu();

  return PinEvent{0, PinEventType::PinDown};
}
