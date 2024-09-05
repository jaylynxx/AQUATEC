#ifndef DEVICE_H
#define DEVICE_H

class Device
{
private:
    /* data */
public:
    virtual ~Device() = 0;

    virtual void begin() = 0;
    virtual void update() = 0;
    virtual void end() = 0;
};

#endif