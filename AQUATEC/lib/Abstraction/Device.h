#ifndef DEVICE_H
#define DEVICE_H

class Device
{
private:
    /* data */
public:
    virtual ~Device();

    virtual void begin();
    virtual void update();
    virtual void end();
};

#endif