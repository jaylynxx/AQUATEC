
#ifndef AQUATEC_CONTROL_H
#define AQUATEC_CONTROL_H

#include "Device.h"
#include "Control.h"
#include "Actuator.h"
#include "Transducer.h"
#include "Water.h"
//#include "List.hpp"
#include "Arduino.h"

class AQUATECControl : public Control
{
private:
    /* data */
    Device *Devices[10];
    int DeviceCount{0};
    Water waterQuality;

    

public:
    AQUATECControl(/* args */);
    ~AQUATECControl();

    void notify();

    void attach(Device *device);
    void dettach(Device *device);

};

#endif