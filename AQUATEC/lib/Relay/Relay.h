#ifndef RELAY_H
#define RELAY_H

#include "Device.h"

class Relay : public Device
{
private:
    int _pin;
    volatile byte _state = LOW;

public:
    Relay(int pin);
    ~Relay();

    void begin();
    void update();
    void end();

    void actuate();

    void activate();
    void deactivate();

};

#endif // RELAY_H