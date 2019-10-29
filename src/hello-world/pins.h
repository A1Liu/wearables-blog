#pragma once
#include <Arduino.h>

enum class PinMode { Input, Output, Undefined };

enum class PinEventType { PinDown, PinUp };

struct PinEvent {
  int pin_number;
  PinEventType type;

  PinEvent(int _number, PinEventType _type)
      : pin_number(_number), type(_type) {}
};

void setup_listeners(void);

void pinMode(int pin, PinMode p);

PinEvent listen_for_event();
