#ifndef Water_h
#define Water_h

#include "Water.h"

Water::Water() {}

Water::~Water() {}

bool Water::isPotable()
{
    if (pHLevel > pHLevelthreshold + .5 || pHLevel < pHLevelthreshold - .5 || TDS > TDSthreshold + 175 || TDS < TDSthreshold - 175)
    {
        return false;
        else return true;
    }
}
#endif