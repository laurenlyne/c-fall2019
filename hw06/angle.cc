#include "Angle.h"
#include <iostream>

Angle::Angle() {
    
}
Angle::Angle(double angle ){
    
    while(angle>360.0)
    {
        angle-=360.0;
    }
    while(angle<360.0)
    {
        angle+=360.0;
    }
    this->angle = angle;
}

Angle::~Angle() {
}
double Angle::getAngle() const{
    return angle;
}

Angle Angle :: operator+(const Angle& angle) const{
    
    return Angle(this->angle+ angle.getAngle());
}
Angle Angle :: operator-(const Angle& angle) const{
    
    return Angle(this->angle- angle.getAngle());
}

void Angle :: set(double angle){
    this->angle = angle;
}
std::ostream& operator<<(std :: ostream& out, const Angle& angle){
    out << "("<<angle.angle<<")";
    return out;
    }
