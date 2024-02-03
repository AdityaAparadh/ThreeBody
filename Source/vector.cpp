#include <vector>
#include <iostream>
#include <cmath>
#include "../Headers/vector.h"


void Vector::updateData(){
    magnitude = sqrt(x*x + y*y + z*z);
    direction_alpha = atan(y/x);
    direction_beta = atan(z/y);
    direction_gamma = atan(z/x);
}


Vector::Vector()
{
    x = 0;
    y = 0;
    z = 0;
}
Vector::Vector(float xyz)
{
    x = xyz;
    y = xyz;
    z = xyz;
}
Vector::Vector(float x, float y, float z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

float Vector::getX() { return x; }
float Vector::getY() { return y; }
float Vector::getZ() { return z; }

float Vector::getMagnitude(){ return magnitude; }
float Vector::getDirectionAlpha(){ return direction_alpha; }
float Vector::getDirectionBeta(){ return direction_beta; }
float Vector::getDirectionGamma(){ return direction_gamma; }


void Vector::setX(float x) { this->x = x; updateData(); }
void Vector::setY(float y) { this->y = y; updateData(); }
void Vector::setZ(float z) { this->z = z; updateData(); }

void Vector::scaleMagnitude(float scale)
{
    x *= scale;
    y *= scale;
    z *= scale;
    updateData();
}


Vector Vector::operator+(Vector b)
{
    return Vector(x + b.x, y + b.y, z + b.z);
}
Vector Vector::operator-(Vector b)
{
    return Vector(x - b.x, y - b.y, z - b.z);
}
Vector Vector::operator*(float multiplicand)
{
    return Vector(x * multiplicand, y * multiplicand, z * multiplicand);
}
Vector Vector::operator/(float divisor)
{
    return Vector(x / divisor, y / divisor, z / divisor);
}



Vector Vector::addTo(Vector b)
{
    return Vector(x + b.x, y + b.y, z + b.z);
}
Vector Vector::subtractBy(Vector b)
{
    return Vector(x - b.x, y - b.y, z - b.z);
}
Vector Vector::multiplyWith(float multiplicand)
{
    return Vector(x * multiplicand, y * multiplicand, z * multiplicand);
}
Vector Vector::divideBy(float divisor)
{
    return Vector(x / divisor, y / divisor, z / divisor);
}

float Vector::scalarProductWith(Vector b)
{
    return (x * b.x + y * b.y + z * b.z);
}
Vector Vector::vectorProductWith(Vector b)
{
    return Vector((x * b.y) - (y * b.x), (z * b.x) - (x * b.z), y * (b.z) - (z * b.y));
}




void Vector::PrintVector()
{
    std::cout << "{ " << x << " , " << y << " , " << z << " }" << std::endl;
}
