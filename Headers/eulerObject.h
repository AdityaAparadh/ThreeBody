#ifndef EULEROBJECT_H
#define EULEROBJECT_H


#include "object.h"

class EulerObject : public Object{

    private:
        Vector velocity;
        Vector acceleration;

    public:

        EulerObject(float Mass);
        EulerObject(float Mass, Vector Position);
        EulerObject(float Mass, Vector Position, Vector Velocity);
        EulerObject(float Mass, Vector Position, Vector Velocity, Vector Acceleration);

        Vector getVelocity() const;
        Vector getAcceleration() const;

        void setVelocity(Vector Velocity);
        void setAcceleration(Vector Acceleration);


        void applyForce(Vector Force);
        void Update(float delta) override;

};


#endif
