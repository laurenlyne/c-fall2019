#ifndef FISH_H
#define FISH_H
#include <iostream>
#include "Angle.h"


class Fish{
    
protected:
    double x=0;
    double y=0;
    double speed=0;
public:
    Fish(double x, double y, double speed);
    virtual ~Fish();
    
    double getX() const;
    double getY() const;
    double getSpeed() const;
    virtual void swim() = 0;
};
#endif
