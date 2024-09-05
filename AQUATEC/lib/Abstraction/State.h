#ifndef STATE_H
#define STATE_H

class State {
public:
    virtual void handle()=0; //consider pure virtual
    virtual ~State() = 0;
};


#endif  // STATE_H