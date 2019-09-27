---
title: "Wearables Week 2: Retrying Small Circuit on a Lanyard"
---
I sewed LED's and a battery onto a CppCon lanyard again - the previous version
had 7 LEDs, of which only one received power and lit up, so I tried to redo it
with a simpler sewing pattern and less LEDs.

This time, notably, I used a simple pattern:

<img src="{{ site.wearables_url }}/assets/img/wearables/p2-stitching-pattern.jpg">

Before, I was using a pattern that looped back over itself for stability, but
I realized this time around that I was probably just shorting the circuit when
I did that. So this time the pattern I used looked like this:

```
   |    +----+    +----+    | Thread
   |    |    |    |    |    |
===|====|====|====|====|====|======> Lanyard
   |    |    |    |    |    |
   +----+    +----+    +----+
```

This way, there's no wire crossing; my hope was that this would mean that all the
lights would turn on.

I also tried to stay on the lighter side of reinforcing the circuitry onto the
lanyard this time, because ultimately the hardware is pretty light, so it shouldn't
be a big deal.

<img src="{{ site.wearables_url }}/assets/img/wearables/p2-one-side-done.jpg">

This time I also tried to be very methodical about how I attached the LEDs. In the
image above, you might notice that the middle and right LEDs both have two places
where the thread crosses them; this is what it looks like from the side:

```
   |    +--------+    +--------+    | Thread
   |    |XXXXXXXX|    |XXXXXXXX|    |
   |    |XXXXXXXX|    |XXXXXXXX|    |    X represents LED contact
   |    |XXXXXXXX|    |XXXXXXXX|    |
===|====|========|====|========|====|======> Lanyard
   |    |        |    |        |    |
   +----+        +----+        +----+
```

The idea was that a single thread going over twice would be better than the multiple
wraps that I did before for keeping contact with the LED.

### Results
This is what it looked like:

<img src="{{ site.wearables_url }}/assets/img/wearables/p2-final-on.jpg">

Everything worked! Initially the middle light didn't turn on, which was worrying,
but everything works now! Woohoo!

