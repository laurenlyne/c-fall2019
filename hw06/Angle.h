#include <iostream>
#ifndef ANGLE_H
#define ANGLE_H

class Angle {
private:
    double angle=0;

public:
    Angle();
    Angle(double angle);
    virtual ~Angle();
    
    double getAngle() const;
    
    void set(double angle);

    Angle operator+ (const Angle& angle) const;
    
    Angle operator- (const Angle& angle) const;
    
    friend std :: ostream& operator <<(std :: ostream& out, const Angle& angle);
    };

#endif
