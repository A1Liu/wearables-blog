#pragma once
#include <Arduino.h>

enum class PinMode { Input, Output, Undefined };

enum class PinEventType { PinDown, PinUp };

struct PinEvent {
  int pin_number;
  PinEventType event_type;

  PinEvent(int _number, PinEventType _event_type)
      : pin_number(_number), event_type(_event_type) {}
};

void setup_listeners(void);

void pinMode(int pin, PinMode p);

PinEvent listen_for_event();
