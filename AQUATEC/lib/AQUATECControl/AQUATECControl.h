
#ifndef AQUATECControl_h
#define AQUATECControl_h

#include "Device.h"
#include "Control.h"
#include "Actuator.h"
#include "Transducer.h"
#include "List.hpp"
#include "Arduino.h"


class AQUATECControl : public Control
{
private:
    /* data */
    List<Device> Devices;

public:
    AQUATECControl(/* args */);
    ~AQUATECControl();

    void update();
    void notify();

    void attach(Device device);
    void dettach(Device device);

};

#endif