// TODO:
/**
 * <summary>
 * This class is used for the whole control of the device.
 * </summary>
 */

#ifndef AQUATECControl_h
#define AQUATECControl_h

#include "AQUATECControl.h"
#include "Actuator.h"
#include "Transducer.h"
#include "List.hpp"

AQUATECControl::AQUATECControl(/* args */)

    AQUATECControl::~AQUATECControl()

        void AQUATECControl::update()
{
}

void AQUATECControl::notify()

    void AQUATECControl::attach(Device device)
{
    Devices.add(device);
}

void AQUATECControl::dettach(Device device)
{
    Devices.remove(device);
}
#endif