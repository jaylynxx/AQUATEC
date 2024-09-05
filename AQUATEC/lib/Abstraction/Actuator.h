#ifndef ACTUATOR_H
#define ACTUATOR_H

#include "Arduino.h"
#include "Device.h"

class Actuator : public Device
{
private:
    /* data */
public:
    virtual ~Actuator() = 0;

    virtual void actuate() = 0;
};


#endif