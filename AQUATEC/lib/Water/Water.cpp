#include "Water.h"

Water::Water() {}

Water::~Water() {}

bool Water::isPotable()
{
    bool isPHLevelOutOfRange = _pHLevel > _pHLevelThreshold + 0.5 || _pHLevel < _pHLevelThreshold - 0.5;
    bool isTDSSOutOfRange = _TDS > _TDSthreshold + 175 || _TDS < _TDSthreshold - 175;

    return !(isPHLevelOutOfRange || isTDSSOutOfRange);
}

void Water::handle() {}
State::~State() {}

int Water::getTemp()
{
    return _temp;
}

void Water::setTemp(int temp)
{
    _temp = temp;
}

int Water::getpHLevel()
{
    return _pHLevel;
}

void Water::setpHLevel(int pHLevel)
{
    _pHLevel = pHLevel;
}

int Water::getTDS()
{
    return _TDS;
}

void Water::setTDS(int TDS)
{
    _TDS = TDS;
}

int Water::getTempthreshold()
{
    return _tempthreshold;
}

void Water::setTempthreshold(int tempthreshold)
{
    _tempthreshold = tempthreshold;
}

float Water::getpHLevelthreshold()
{
    return _pHLevelThreshold;
}

void Water::setpHLevelthreshold(int pHLevelthreshold)
{
    _pHLevelThreshold = pHLevelthreshold;
}

int Water::getTDSthreshold()
{
    return _TDSthreshold;
}

void Water::setTDSthreshold(int TDSthreshold)
{
    _TDSthreshold = TDSthreshold;
}