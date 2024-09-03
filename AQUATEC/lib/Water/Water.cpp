#ifndef Water_h
#define Water_h

#include "Water.h"

Water::Water() {}

Water::~Water(){}

    bool Water::isPotable() const
    {
        const auto isPHLevelOutOfRange = pHLevel > pHLevelThreshold + 0.5 || pHLevel < pHLevelThreshold - 0.5;
        const auto isTDSSOutOfRange = TDS > TDSthreshold + 175 || TDS < TDSthreshold - 175;

        return !(isPHLevelOutOfRange || isTDSSOutOfRange);
    }

#endif