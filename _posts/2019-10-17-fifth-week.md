---
title: "Wearables Week 5 & 6: Programming a Button and Other Things"
---
I'm programming a button for use in a light-up stuffed animal!

### Building Abstractions
First, I'm building abstractions that make it easier to think about the logic.

```cpp
// Mode set for each pin
enum class PinMode { Input, Output, Undefined };

// Event type for a pin
enum class PinEventType { PinDown, PinUp };

// An event that can happen on a pin
struct PinEvent {
  int pin_number;
  PinEventType event_type;

  // ...
};

// Set the pin mode for one of the pins
void pinMode(int pin, PinMode p);

// Listen for an event on any of the pins
PinEvent listen_for_event();
```

### A Busy-waiting listener

### Setting up the Watchdog
I wanted to make the listener a little better, so I decided to replace my listener

```
Arduino: 1.8.10 (Mac OS X), Board: "ATtiny25/45/85, ATtiny85, Internal 8 MHz"

sketch/pins.cpp: In function 'PinEvent listen_for_event(long unsigned int)':
pins.cpp:40:3: error: 'WDTCSR' was not declared in this scope
   WDTCSR = bit(WDCE) | bit(WDE);
   ^~~~~~
sketch/pins.cpp:40:3: note: suggested alternative: 'WDTCR'
   WDTCSR = bit(WDCE) | bit(WDE);
   ^~~~~~
   WDTCR
exit status 1
'WDTCSR' was not declared in this scope
```


[this forum post](https://forum.arduino.cc/index.php?topic=108870.0).
```
```




