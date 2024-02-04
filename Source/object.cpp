#include "../Headers/object.h"

//Object::Object(float Mass){
//    mass = Mass;
//    position = Vector(0,0,0);
//}
//
//Object::Object(float Mass, float Position) {
//    mass = Mass;
//    position = Vector(Position);
//}
float Object::getMass() const{
    return mass;
}

Vector Object::getPosition() const {
    return position;
}

void Object::setMass(float Mass){
    mass = Mass;
}

void Object::setPosition(Vector Position){
    position = Position;
}
