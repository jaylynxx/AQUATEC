#ifndef STATE_H
#define STATE_H

class State {
public:
    virtual void handle(); //consider pure virtual
    virtual ~State() {}
};

#endif  // STATE_H