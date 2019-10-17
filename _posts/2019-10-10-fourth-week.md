---
title: "Wearables Week 4: Project Proposal and Planning"
---
I'm going to write a simple library for handling different input types on a single
pin.

### Power Saving
I went on the [H2OhNo! project guide][h2ohno] and found some useful tips for saving
power:

1. Turn off analog-to-digital conversion (ADC). This saves around 230uA.
2. Go to sleep when possible. This can save entire amps.

[h2ohno]: https://learn.sparkfun.com/tutorials/h2ohno

I also found [this page on power saving](http://www.gammon.com.au/power), which
was a bit more detailed.

### Phase 1 Project Proposal
My project will be a simple stuffed animal that can change colors when you squeeze
it. Squeezing it twice should turn it off/on, and squeezing it once should change
the color that's being displayed. Here's a picture of the animal for reference!

<img src="{{ site.wearables_url }}/assets/img/wearables/p4-stuffed-animal.jpg">

My current plan is to sew the LEDs under its shirt, to reduce the risk of failure.
Aluminum foil on the hands will make contact with conductive thread in the shirt
to act as an input to pin 4, and the three LEDs (Red, Green, Blue) will be connected
to pins 1, 2, and 3 respectively. The battery pack and LilyTiny will be sewn into
the back.



