#include "pins.h"

void flickerPin(int pin, long delayTime) {
  flipPin(pin);
  delay(delayTime);
  flipPin(pin);
}

void flickerPin(int pin) {
  flickerPin(pin, 30);
  delay(30);
  flickerPin(pin, 30);
  delay(30);
  flickerPin(pin, 30);
  delay(50);
  flickerPin(pin, 200);
  delay(100);
  flickerPin(pin, 400);
  delay(200);
  flickerPin(pin, 800);
}

void setup() {
  // From the H2OhNo tutorial
  // ADCSRA &= ~(1<<ADEN); //Disable Analog-to-Digital Converter, saves ~230uA

  // disable ADC
  // ADCSRA = 0;

  pinMode(2, PinMode::Output);
  pinMode(3, PinMode::Output);

  flickerPin(2);
  flickerPin(3);

}

void loop() {
  flickerPin(2);
  delay(5000);
  flickerPin(3);
  delay(5000);
}

