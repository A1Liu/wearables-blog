---
title: "Wearables Week 4: Programming a Simple Watch"
---
I'm going to write a simple library for handling different input types on a single
pin.

### Power Saving
I went on the [H2OhNo! project guide][h2ohno] and found some useful tips for saving
power:

1. Turn off analog-to-digital conversion (ADC). This saves around 230uA.
2. Go to sleep when possible. This can save entire amps.

[h2ohno]: https://learn.sparkfun.com/tutorials/h2ohno

### Phase 1 Project Proposal
My project will be a simple stuffed animal that can change colors when you squeeze
it. Squeezing it twice should turn it off/on, and squeezing it once should change
the color that's being displayed.


