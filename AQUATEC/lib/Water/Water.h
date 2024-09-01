#ifndef Water_h
#define Water_h


class Water
{
private:
    /* data */
    int Temp;
    int pHLevel;
    int TDS; // Total Dissolve Sollids
    int Tempthreshold;
    float pHLevelthreshold;
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