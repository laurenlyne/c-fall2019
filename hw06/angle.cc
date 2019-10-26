#include "Angle.h"
#include <iostream>
#include <cmath>
#include "fish.h"
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

double Angle :: getCos() const{
    
    return cos(angle*M_PI/180.0);
}

double Angle :: getSin() const{
   
    return sin(angle*M_PI/180.0);
}

double Angle:: getDirection() const{
    return direction;
}

double Angle:: getTurn() const{
    return turn;
}

void Angle :: set1(double angle){
    this->angle = angle;
}
void Angle :: set2(double direction, double turn){
    this->direction=direction;
    this->turn=turn;
}

std::ostream& operator<<(std :: ostream& out, const Angle& angle){
    out << "("<<angle.angle<<")";
    return out;
    }
