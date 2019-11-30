
#include "Angle.h"
#include <iostream>
#include "fish.h"

Fish::Fish(double x, double y, double speed){
    
    this->x=x;
    this->y=y;
    this->speed=speed;
    
}
Fish::~Fish() {
}

double Fish::getX() const{
    return x;
}
double Fish::getY() const{
    return y;
}
double Fish:: getSpeed() const{
    return speed;
}
