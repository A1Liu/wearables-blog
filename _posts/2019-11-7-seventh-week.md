---
title: "Wearables Week 7: Wiring a Hedgehog"
---
I wired my hedgehog up! Kinda. The Lily-tiny doesn't receive power yet, but we're
getting there.

<img src="{{ site.wearables_url }}/assets/img/wearables/p6-wiring-the-front-led.jpg">


I tested the wiring continuously while sewing to prevent any poor connection issues,
and had to rewire the battery pack twice. In the end though, I got the connection
to work as intended.

<img src="{{ site.wearables_url }}/assets/img/wearables/p6-wiring-the-hedgehog.jpg">

The wiring goes around the left side of the hedgehog, in very long stitches. My
thinking is that conductive thread should be stitched a little differently from
normal thread, with much longer stitches to reduce the amount of wire that electricity
has to travel along. Also, I found it a lot easier to tighten the thread onto
the LED when the thread was loose.

<div style="display: inline-block;width: 100%">

<pre style="width:45%; float: left">
Instead of this:
   |    +----+    | Thread
   |    |    |    |
===|====|====|====|======> Lanyard
   |    |    |    |
   +----+    +----+
</pre>

<pre style="width:45%; float: right">
Do this:
   |              | Thread
   |              |
===|==============|======> Lanyard
   |              |
   +--------------+
</pre>

</div>

Also, though I haven't done it for this so far, I think it might be a good idea
to sew elements into place without any conductive thread first, so that prototyping
becomes easier, and screw-ups become more manageable.

As a final thought, I think the biggest problem I'll have with this part is handling
IO in the hardware. How do I input data to the device?

<img src="{{ site.wearables_url }}/assets/img/wearables/p6-hedgehog-iron-man.jpg">
