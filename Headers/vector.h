#ifndef VECTOR_H
#define VECTOR_H

class Vector{

    private:

        float x;
        float y;
        float z;

        float magnitude;        
        float direction_alpha;        
        float direction_beta;
        float direction_gamma;
    
        void updateData();

    public:

        Vector();
        Vector(float xyz);
        Vector(float x, float y, float z);

        float getX();
        float getY();
        float getZ();
        
        float getMagnitude();
        float getDirectionAlpha();
        float getDirectionBeta();
        float getDirectionGamma();

        void setX(float x);
        void setY(float y);
        void setZ(float z);

        void scaleMagnitude(float scale);

        Vector operator+(Vector b);
        Vector operator-(Vector b);
        Vector operator*( float multiplicand );
        Vector operator/(float divisor);


        Vector addTo(Vector b);
        Vector subtractBy( Vector b);
        Vector multiplyWith( float multiplicand );
        Vector divideBy(float divisor);

        float scalarProductWith(Vector b);
        Vector vectorProductWith(Vector b);


        void PrintVector();

};





#endif