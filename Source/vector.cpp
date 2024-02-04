#include <cmath>
#include <iostream>
#include "../Headers/vector.h"


void Vector::updateData(){
    magnitude = std::sqrt(x*x + y*y + z*z );
    direction_alpha = std::atan(y/x);
    direction_beta = std::atan(z/y);
    direction_gamma = std::atan(z/x);
}


Vector::Vector()
{
    x = 0;
    y = 0;
    z = 0;
    updateData();
}
Vector::Vector(float xyz)
{
    x = xyz;
    y = xyz;
    z = xyz;
    updateData();
}
Vector::Vector(float x, float y, float z)
{
    this->x = x;
    this->y = y;
    this->z = z;
    updateData();
}

float Vector::getX() const { return x; }
float Vector::getY() const { return y; }
float Vector::getZ() const { return z; }

float Vector::getMagnitude() const{ return magnitude; }
float Vector::getDirectionAlpha() const{ return direction_alpha; }
float Vector::getDirectionBeta() const{ return direction_beta; }
float Vector::getDirectionGamma() const{ return direction_gamma; }


void Vector::setX(float X) { this->x = X; updateData(); }
void Vector::setY(float Y) { this->y = Y; updateData(); }
void Vector::setZ(float Z) { this->z = Z; updateData(); }

void Vector::scaleMagnitude(float scale)
{
    x *= scale;
    y *= scale;
    z *= scale;
    updateData();
}


Vector Vector::operator+(Vector b) const
{
    return {x + b.x, y + b.y, z + b.z};
}
Vector Vector::operator-(Vector b) const
{
    return {x - b.x, y - b.y, z - b.z};
}
Vector Vector::operator*(float multiplicand) const
{
    return {x * multiplicand, y * multiplicand, z * multiplicand};
}
Vector Vector::operator/(float divisor) const
{
    return {x / divisor, y / divisor, z / divisor};
}



Vector Vector::addTo(Vector b) const
{
    return {x + b.x, y + b.y, z + b.z};
}
Vector Vector::subtractBy(Vector b) const
{
    return {x - b.x, y - b.y, z - b.z};
}
Vector Vector::multiplyWith(float multiplicand) const
{
    return {x * multiplicand, y * multiplicand, z * multiplicand};
}
Vector Vector::divideBy(float divisor) const
{
    return {x / divisor, y / divisor, z / divisor};
}

float Vector::scalarProductWith(Vector b) const
{
    return (x * b.x + y * b.y + z * b.z);
}
Vector Vector::vectorProductWith(Vector b) const
{
    return {(x * b.y) - (y * b.x), (z * b.x) - (x * b.z), y * (b.z) - (z * b.y)};
}

void Vector::normalize() {
    float mag = getMagnitude();
    x /= mag;
    y /= mag;
    z /= mag;
    updateData();
}


void Vector::PrintVector() const
{
    std::cout << "{ " << x << " , " << y << " , " << z << " }" << std::endl;
}
