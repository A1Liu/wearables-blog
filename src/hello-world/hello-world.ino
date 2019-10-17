#include <avr/sleep.h>
#include "pins.h"

void setup() {
  // From the H2OhNo tutorial
  // ADCSRA &= ~(1<<ADEN); //Disable Analog-to-Digital Converter, saves ~230uA

  // disable ADC
  ADCSRA = 0;
}

void loop() {
  // short b = analogRead(inputPin);
  // analogWrite(outputPin, b);
}

