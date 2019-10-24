#pragma once
#include <Arduino.h>

enum class PinMode { Input, Output };

enum class PinEventType { PinDown, PinUp };

class PinEvent {
  int pin_number;
  PinEventType event_type;

public:
  PinEvent(int _number, PinEventType _event_type)
      : pin_number(_number), event_type(_event_type) {}
};

void setup_listeners(void);

void pinMode(int pin, PinMode p);

PinEvent listen_for_event(unsigned long wait_time = 0);
