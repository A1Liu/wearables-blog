---
title: "Wearables Week 8-9: Hedgehog Problems and Wiring a Knitted Android Instead"
---
I've abandoned the hedgehog `:(` I'm moving on to sewing circuitry onto a knitted
Android stuffed thing instead. I found that the hair on the hegehog got in the way
of both sewing and ensuring contact between the thread and the circuit components.

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
```

It sends a signal at a different interval for each pin, so you can make sure you're
not making any mistakes with the circuitry. I haven't decided on final values for
each of the intervals, but I do think that they need to be different by constant
factor, so that the user can tell, just by looking at the cooresponding blinking
LED, which pin is being used.

You can use it by copy-pasting all the code manually, or by compiling and uploading
the `intervals` sketchbook in `src/intervals`. Since the library is included in
the sketchbook, everything should work out of the box, assuming [you have your IDE set up correctly][reprogramming-lily-twinkle].

[reprogramming-lily-twinkle]: https://learn.sparkfun.com/tutorials/re-programming-the-lilytiny--lilytwinkle/all

### Android Difficulties and Ideas
Sewing is HARD man. After sewing for a few hours I finally tested my android only
to find that it didn't work. Here's some pictures:

<img src="{{ site.wearables_url }}/assets/img/wearables/p8-android-back-view.jpg">

<img src="{{ site.wearables_url }}/assets/img/wearables/p8-android-side-view.jpg">

### Problem, Solution
It turns out that my code was faulty! Here's how I figured it out.

I didn't want to restart, so I first tried to fill in the missing connection I had
with an alligator clip, and when that didn't work, I hooked everything up with
alligator clips.

<img src="{{ site.wearables_url }}/assets/img/wearables/p8-android-wired-up.jpg">


That revealed that either something wasn't right with hardware, or my code didn't work.
A few minutes of debugging later, I found the problem, which had to do with a missing
line in my `pins.cpp` library to actually turn on the pin. With that fixed, everything
works!

<img src="{{ site.wearables_url }}/assets/img/wearables/p8-android-success.jpg">

### Best Practices
Things I think might be helpful for the next attempt:

1. **Sew everything on with non-conductive thread first.** - This helped tremendously
   with planning and setup, and made things much easier to visualize.
2. **Use a thimble** - This is more applicable to sewing thicker materials (like
   a knitted doll). It sometimes takes some force to push the needle through, and
   a thimble could've helped with that, had I used one.
3. **Test Continuously** - Get the circuit working with alligator clips and a test
   program, and then slowly replace alligator clips with sewn thread as you can.
   This might not be possible every time, but if you can manage to test continuously
   it'll keep errors from causing a full reset.
4. **Use a Test Program** - Don't use your actual program when you're sewing/building.
   Your program should be able to assume, at least to some degree, that all the
   hardware is working correctly. When you're building this isn't true at all.
   To reduce uncertainty, and make debugging easier, use a program that has well
   known behavior, like the [`intervals.ino`](https://github.com/A1Liu/wearables-blog/blob/master/src/intervals/intervals.ino)
   program that I wrote for exactly this purpose.

