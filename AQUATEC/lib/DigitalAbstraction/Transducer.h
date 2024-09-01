#ifndef Transducer_h
#define Transducer_h

#include "Device.h"

class Transducer : Device
{
private:
    /* data */
public:
    Transducer(/* args */);
    ~Transducer();

    virtual void transduce();
};


#endif