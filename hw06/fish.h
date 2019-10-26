#ifndef FISH_H
#define FISH_H
#include <iostream>
#include "Angle.h"


class Fish{
    
private:
    double x=0;
    double y=0;
    double speed=0;
  

public:
    Fish(double x, double y, double speed);
    virtual ~Fish();
    
    double getX() const;
    double getY() const;
    double getSpeed() const;
    void swim() const;
    
    Angle getDirection() const;
    Angle getTurn() const;
    
    void set(double x, double y, double speed);
    
    
    friend std :: ostream& operator <<(std :: ostream& out, const Fish& angle);

};

#endif

