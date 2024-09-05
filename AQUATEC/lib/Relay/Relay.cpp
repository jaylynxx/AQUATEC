#include <Arduino.h>
#include "Relay.h"

Relay::Relay(int pin)
{
    _pin = pin;
}

Relay::~Relay()
{
}

void Relay::begin()
{
    pinMode(_pin, OUTPUT);
}

void Relay::update()
{
    //TODO Add logic
}

void Relay::end()
{
    //TODO Add logic
}

void Relay::actuate()
{
    //TODO Add logic
}

void Relay::activate()
{
    //TODO Add logic
}

void Relay::deactivate()
{
    //TODO Add logic
}

Device::~Device() {}
