#include "pins.h"

void setup() {
  // From the H2OhNo tutorial
  // ADCSRA &= ~(1<<ADEN); //Disable Analog-to-Digital Converter, saves ~230uA

  // disable ADC
  ADCSRA = 0;

  pinMode(0, PinMode::Output);
  pinMode(1, PinMode::Output);
  pinMode(2, PinMode::Output);
  pinMode(3, PinMode::Input);
}

void loop() {
  auto event  = listen_for_event();
  if (event.type == PinEventType::PinUp) {
    digitalWrite(0, HIGH);
    digitalWrite(1, HIGH);
    digitalWrite(2, HIGH);
  } else {
    digitalWrite(0, LOW);
    digitalWrite(1, LOW);
    digitalWrite(2, LOW);
  }
}

