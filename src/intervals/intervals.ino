#include "pins.h"

void setup() {
  pinMode(0, PinMode::Output);
  pinMode(1, PinMode::Output);
  pinMode(2, PinMode::Output);
  pinMode(3, PinMode::Output);

  digitalWrite(1, HIGH);
}


void loop() {
  static int counter = 0;
  delay(100);

  if (counter % 2 == 0) flipPin(0);
  if (counter % 3 == 0) flipPin(1);
  if (counter % 6 == 0) flipPin(2);
  if (counter % 12 == 0) flipPin(3);

  if (counter == 0) {
    counter = 59;
  } else {
    counter--;
  }
}

