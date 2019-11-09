#ifndef FLIPPY_H
#define FLIPPY_H
#include <iostream>
#include "Angle.h"
#include "fish.h"


class Flippy: public Fish{
    
private:

    Angle turn =0;
    Angle direction =0;
    
    
    
public:
    Flippy(double turn, double direction, double x, double y, double speed);
    virtual ~Flippy();
    
  
    virtual void swim() override;

};

#endif
