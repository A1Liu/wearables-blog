#include "pins.h"
#include <avr/sleep.h>
#include <avr/wdt.h>

PinMode pin_modes[5] = {PinMode::Undefined, PinMode::Undefined,
                        PinMode::Undefined, PinMode::Undefined,
                        PinMode::Undefined};
PinEventType pin_states[5];

void setup_listeners() {
  for (int i = 0; i < 5; i++) {
    if (digitalRead(i) == HIGH) {
      pin_states[i] = PinEventType::PinUp;
    } else {
      pin_states[i] = PinEventType::PinDown;
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

PinEvent listen_for_event() {
  while (true)
    for (int i = 0; i < 5; i++) {
      if (pin_modes[i] == PinMode::Input) { // If it's an input pin...

        auto event_type = digitalRead(i) == HIGH ? PinEventType::PinUp
                                                 : PinEventType::PinDown;
        // ...and its state has changed...
        if (event_type != pin_states[i]) {
          pin_states[i] = event_type;     // ...Then update the pin
          return PinEvent{i, event_type}; // states and return an event
        }
      }
    }
}
