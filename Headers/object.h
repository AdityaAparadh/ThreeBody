#ifndef OBJECT_H
#define OBJECT_H

#include "vector.h"

class Object{

protected:
    float mass;
    Vector position;

public:

//    Object(float Mass);
//    Object(float Mass, float Position);

    float getMass() const;
    Vector getPosition() const;

    void setMass(float Mass);
    void setPosition(Vector Position);


    virtual void applyForce(Vector Force) = 0;
    virtual void Update(float) = 0;
};


#endif
