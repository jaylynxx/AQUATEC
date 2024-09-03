#ifndef WATER_H
#define WATER_H

#include "State.h"

class Water : public State
{
private:
    /* data */
    int Temp;
    int pHLevel;
    int TDS; // Total Dissolve Sollids
    int Tempthreshold;
    float pHLevelThreshold;
    int TDSthreshold;

public:
    Water(/*
    int Temp;
    int pHLevel:
    int TDS \\ Total Dissolve Sollids args */) {}
    ~Water();

    bool isPotable();


    int getTemp();
    int setTemp(int Temp);

    int getpHLevel();
    int setpHLevel(int pHLevel);

    int getTDS(); 
    int setTDS(int TDS);

    int getTempthreshold();
    int setTempthreshold(int Tempthreshold);

    float getpHLevelthreshold();
    float setpHLevelthreshold(int pHLevelthreshold);

    int getTDSthreshold();
    int setTDSthreshold(int TDSthreshold);

};

#endif