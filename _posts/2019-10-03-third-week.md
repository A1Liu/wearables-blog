---
title: "Wearables Week 3: Failing to Upload Code to an ATtiny"
---
I had a lot of trouble with setup this week. I installed the Arduino IDE and tried
to use it to upload a simple hello world program to the lilypadTiny, and I got the
following error message:

```
Arduino: 1.8.10 (Mac OS X), Board: "ATtiny25/45/85, ATtiny85, Internal 1 MHz"

         Programmer Type : USBtiny
         Description     : USBtiny simple USB programmer, https://learn.adafruit.com/usbtinyisp
avrdude: programmer operation not supported

avrdude: Using SCK period of 10 usec
avrdude: initialization failed, rc=-1
         Double check connections and try again, or use -F to override
         this check.
```

I've cut out the extra debugging information, but the general gist is that I received
the error `initialization failed, rc=-1`. I'm not sure how to fix it, because most
of this is new territory for me.

### Chip's Fried!
So it turns out that my chip is fried. When I first plugged it in I mostly used
trial and error, and so I likely connected it in the wrong direction and fried the
circuitry. That's unfortunate, and I'll have to be more careful next time, but on
the bright side, the rest of the circuitry isn't fried!

