#ifndef ANGLE_H
#define ANGLE_H
#include <iostream>
#include <cmath>

template<class T> class Angle {
protected:
    T angle=0;
    T direction=0;
    T turn=0;
    
public:
    Angle() {
        
    }
    Angle(double angle ){
        
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
    
    virtual ~Angle() {
    }
    double getAngle() const{
        return angle;
    }
    
    Angle operator+(const Angle& angle) const{
        
        return Angle(this->angle+ angle.getAngle());
    }
    Angle operator-(const Angle& angle) const{
        
        return Angle(this->angle- angle.getAngle());
    }
    
    Angle& operator+=(const Angle& angle) {
        this->angle+=angle.angle;
        return *this;
    }
    Angle& operator-=(const Angle& angle) {
        this->angle-=angle.angle;
        return *this;
    }
    double getCos() const{
        
        return cos(angle*M_PI/180.0);
    }
    
    double getSin() const{
        
        return sin(angle*M_PI/180.0);
    }
    
    double  getDirection() const{
        return direction;
    }
    
    double getTurn() const{
        return turn;
    }
    
    void  set1(double angle){
        this->angle = angle;
    }
    void set2(double direction, double turn){
        this->direction=direction;
        this->turn=turn;
    }
    
};

#endif

