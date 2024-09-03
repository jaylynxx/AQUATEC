#ifndef TRANSDUCER_H
#define TRANSDUCER_H

#include "Device.h"

class Transducer : public Device
{
private:
    /* data */
public:
    virtual ~Transducer();

    virtual void transduce();
};


#endif