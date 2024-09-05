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
    virtual ~Control() = 0;

    virtual void notify() = 0;
    virtual void attach(Device *pdevice) = 0;
    virtual void dettach(Device *pdevice) = 0;
};


#endif