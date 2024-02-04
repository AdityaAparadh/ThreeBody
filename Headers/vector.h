#ifndef VECTOR_H
#define VECTOR_H

class Vector{

private:
        float x;
        float y;
        float z;

        float magnitude{};
        float direction_alpha{};
        float direction_beta{};
        float direction_gamma{};
    
        void updateData();

public:

        Vector();
        Vector(float xyz);
        Vector(float x, float y, float z);

        float getX() const;
        float getY() const;
        float getZ() const;
        
        float getMagnitude() const;
        float getDirectionAlpha() const;
        float getDirectionBeta() const;
        float getDirectionGamma() const;

        void setX(float x);
        void setY(float y);
        void setZ(float z);

        void scaleMagnitude(float scale);

        Vector operator+(Vector b) const;
        Vector operator-(Vector b) const;
        Vector operator*( float multiplicand ) const;
        Vector operator/(float divisor) const;


        Vector addTo(Vector b) const;
        Vector subtractBy( Vector b) const;
        Vector multiplyWith( float multiplicand ) const;
        Vector divideBy(float divisor) const;

        float scalarProductWith(Vector b) const;
        Vector vectorProductWith(Vector b) const;

        void normalize();


};





#endif