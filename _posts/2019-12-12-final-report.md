---
title: "Wearables Final Report"
---
This is a recap of everything I did and learned over the course of this independent
study.

## Starter Project: Lanyard
I modified my CppCon lanyard to light up:

<img src="{{ site.wearables_url }}/assets/img/wearables/p2-final-on.jpg" width="400px">

In the process I learned a few things:

1. Conductive thread should be stitched without looping back on itself, to reduce
   the total resistance that the thread has.
2. Undoing mistakes is pretty time consuming, so you have to be careful the first
   time around.

## Failed Project: Hedgehog Stuffed Animal
I attempted to modify a hedgehog stuffed animal:

<img src="{{ site.wearables_url }}/assets/img/wearables/p6-hedgehog-iron-man.jpg" width="400px">

My project idea was to have the hedgehog change colors when squeezed; I got to a
point where I had everything wired up except for input, and didn't know what to
do next. Getting input to work reliably is hard. Here's what I learned:

1. Having extra non-conductive thread is really helpful, so that you can thread
   the conductive thread with the hardware already attached to the thing you're
   sewing it onto.
2. Input is hard to get reliably. Unless you buy something from SparkFun, like a
   button.

In the process, I wrote a program with set intervals for testing purposes. This
program can be found at
[https://github.com/A1Liu/wearables-blog/tree/master/src/intervals](https://github.com/A1Liu/wearables-blog/tree/master/src/intervals).

## Final Project: Android
I modified an android plushie to light up

<div>
<img src="{{ site.wearables_url }}/assets/img/wearables/p8-android-success.jpg" width="400px">

<video width="320" height="240" controls>
   <source src="{{ site.wearables_url }}/assets/img/wearables/android-flicker.MOV" type="video/mp4">
Your browser does not support the video tag.
</video>
</div>

My project idea was much simpler this time: get the eyes to light up, and then have
them flicker. In the process, I learned enough to write a few best practices,
which I'll recap below:

1. Sew everything on with non-conductive thread first.
2. Use a thimble to push the needle through thicker material.
3. Test continuously to prevent bugs, because the cost of mistakes is much higher
   than in software.
4. Use a test program when building to ensure you only have to debug your hardware.

The program I wrote is at
[https://github.com/A1Liu/wearables-blog/tree/master/src/android](https://github.com/A1Liu/wearables-blog/tree/master/src/android).


