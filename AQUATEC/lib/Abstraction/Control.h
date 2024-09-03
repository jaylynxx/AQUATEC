/**
 * @class Control
 * @brief Abstraction serving as the subject in the Observer pattern.
 * 
 * This class provides a common interface for devices that need to be observed by MCU.
 * It allows for the registration and notification of devices, enabling a decoupling of the control
 * from its devices.
 */

#ifndef CONTROL_H
#define CONTROL_H

#include "Arduino.h"
#include "Device.h"

class Control
{
private:
    /* data */
public:
    ~Control();

    virtual void notify();
    virtual void attach(Device device);
    virtual void dettach(Device device);
};


#endif