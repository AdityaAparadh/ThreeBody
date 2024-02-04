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

    virtual void Update() = 0;
};


#endif
