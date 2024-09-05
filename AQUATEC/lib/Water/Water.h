#ifndef WATER_H
#define WATER_H

#include "State.h"

class Water : public State
{
private:
    /* data */
    int _temp;
    int _pHLevel;
    int _TDS; // Total Dissolve Sollids
    int _tempthreshold;
    float _pHLevelThreshold;
    int _TDSthreshold;

public:
    Water(/*
    int Temp;
    int pHLevel:
    int TDS \\ Total Dissolve Solids args */);
    ~Water();
    
    bool isPotable();

    void handle();

//accessors
    int getTemp();
    void setTemp(int temp);

    int getpHLevel();
    void setpHLevel(int pHLevel);

    int getTDS(); 
    void setTDS(int TDS);

    int getTempthreshold();
    void setTempthreshold(int tempthreshold);

    float getpHLevelthreshold();
    void setpHLevelthreshold(int pHLevelthreshold);

    int getTDSthreshold();
    void setTDSthreshold(int TDSthreshold);

};

#endif