---
title: "Wearables Week 8-9: Hedgehog Problems and Wiring a Knitted Android Instead"
published: false
---

### Intervals Program
I wrote a short program to test circuitry. It uses my (unfinished) pin handling
library to send signals out of all pins.

```cpp
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
```

It sends a signal at a different interval for each pin, so you can make sure you're
not making any mistakes with the circuitry. I haven't decided on final values for
each of the intervals, but I do think that they need to be different by constant
factor, so that the user can tell, just by looking at the cooresponding blinking
LED, which pin is being used.
