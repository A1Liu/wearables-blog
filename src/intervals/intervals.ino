#include "pins.h"

void setup() {
  pinMode(0, PinMode::Output);
  pinMode(1, PinMode::Output);
  pinMode(2, PinMode::Output);
  pinMode(3, PinMode::Output);
  pinMode(4, PinMode::Output);
}


void loop() {
  static int counter = 59;
  delay(200);

  if (counter % 2 == 0) flipPin(0);
  if (counter % 6 == 0) flipPin(1);
  if (counter % 12 == 0) flipPin(2);
  if (counter % 30 == 0) flipPin(3);
  if (counter % 60 == 0) flipPin(4);

  if (counter == 0) {
    counter = 59;
  }
}

