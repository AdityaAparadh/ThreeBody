#include "../Headers/eulerObject.h"

EulerObject::EulerObject(float Mass) {
    mass = Mass;
    position = Vector(0,0,0);
    velocity = Vector(0,0,0);
    acceleration = Vector(0,0,0);
}
EulerObject::EulerObject(float Mass, Vector Position) {
    mass = Mass;
    position = Position;
    velocity = Vector(0,0,0);
    acceleration = Vector(0,0,0);
}
EulerObject::EulerObject(float Mass, Vector Position, Vector Velocity) {
    mass = Mass;
    position = Position;
    velocity = Velocity;
    acceleration = Vector(0,0,0);
}
EulerObject::EulerObject(float Mass, Vector Position, Vector Velocity, Vector Acceleration) {
    mass = Mass;
    position = Position;
    velocity = Velocity;
    acceleration = Acceleration;
}

Vector EulerObject::getVelocity() const {
    return velocity;
}
Vector EulerObject::getAcceleration() const {
    return acceleration;
}

void EulerObject::setVelocity(Vector Velocity) {
    velocity = Velocity;
}
void EulerObject::setAcceleration(Vector Acceleration) {
    acceleration = Acceleration;
}

void EulerObject::applyForce( Vector Force) {
    Vector newAcceleration = Force / mass;
    acceleration = acceleration + newAcceleration;
}

void EulerObject::Update(float delta) {
    velocity = velocity + acceleration*delta;
    position = position + velocity*delta;
    acceleration = Vector(0,0,0);
}
