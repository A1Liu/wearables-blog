#include "pins.h"

void setup() {
  // From the H2OhNo tutorial
  // ADCSRA &= ~(1<<ADEN); //Disable Analog-to-Digital Converter, saves ~230uA

  // disable ADC
  ADCSRA = 0;
  listen_for_event();
}

void loop() {
  // short b = analogRead(inputPin);
  // analogWrite(outputPin, b);

}

