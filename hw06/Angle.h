#include <iostream>
#ifndef ANGLE_H
#define ANGLE_H

class Angle {
private:
    double angle=0;
    double direction=0;
    double turn=0;

public:
    Angle();
    Angle(double angle);
    virtual ~Angle();
    
    double getAngle() const;
    double getSin() const;
    double getCos() const;
    double getSpeed() const;
    
    double getDirection() const;
    double getTurn() const;
    
    
    void set1(double angle);
    void set2(double direction, double turn);

    Angle operator+ (const Angle& angle) const;
    
    Angle operator- (const Angle& angle) const;
    
  
    friend std :: ostream& operator <<(std :: ostream& out, const Angle& angle);
    };

#endif
