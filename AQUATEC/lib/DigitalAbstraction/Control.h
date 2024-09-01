#ifndef Control_h
#define Control_h

#include "Arduino.h"
#include "Device.h"

class Control
{
private:
    /* data */
public:
    Control(/* args */);
    ~Control();

    virtual void update();
    virtual void notify();
    virtual void attach(Device device);
    virtual void dettach(Device device);
};


#endif