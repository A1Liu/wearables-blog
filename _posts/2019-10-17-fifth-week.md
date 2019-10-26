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
PinEvent listen_for_event(unsigned long wait_time = 0);
```




