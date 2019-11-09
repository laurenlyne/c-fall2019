#ifndef DRUNK_H
#define DRUNK_H
#include "fish.h"
#include <iostream>

class Drunk : public Fish {
public:
    virtual ~Drunk();
    Drunk(double turn, double direction, double x, double y, double speed);
    
    virtual void swim() override;
};

#endif
