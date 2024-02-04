#include <gtest/gtest.h>
#include "../Headers/vector.h"
#include <cmath>

TEST(VectorTest, AddTest) {

    Vector v1(1, 2, 3);
    Vector v2(4, 5, 6);

    Vector result = v1 + v2;

    ASSERT_EQ(result.getX(), 5);
    ASSERT_EQ(result.getY(), 7);
    ASSERT_EQ(result.getZ(), 9);
}

TEST(VectorTest, SubTest) {

    Vector v1(1, 2, 3);
    Vector v2(4, 5, 6);

    Vector result = v1 - v2;

    ASSERT_EQ(result.getX(), -3);
    ASSERT_EQ(result.getY(), -3);
    ASSERT_EQ(result.getZ(), -3);
}

TEST(VectorTest, MultiplyTest){
    
        Vector v1(1, 2, 3);
        float f = 32;
    
        Vector result = v1 * f;

        ASSERT_EQ(result.getX(), 32);
        ASSERT_EQ(result.getY(), 64);
        ASSERT_EQ(result.getZ(), 96);

}

TEST(VectorTest, DivideTest){
    
        Vector v1(1, 2, 3);
        float f = 2;
    
        Vector result = v1 / f;

        ASSERT_EQ(result.getX(), 0.5);
        ASSERT_EQ(result.getY(), 1);
        ASSERT_EQ(result.getZ(), 1.5);

}

TEST(VectorTest, DotTest) {

    Vector v1(1, 2, 3);
    Vector v2(4, 5, 6);

    double result = v1.scalarProductWith(v2);

    ASSERT_EQ(result, 32);
}

TEST(VectorTest, CrossTest) {

    Vector v1(1, 2, 3);
    Vector v2(4, 5, 6);

    Vector result = v1.vectorProductWith(v2);

    ASSERT_EQ(result.getX(), -3);
    ASSERT_EQ(result.getY(), 6);
    ASSERT_EQ(result.getZ(), -3);
}

TEST(VectorTest, MagnitudeTest) {

    Vector v1(1, 2, 3);

    float result = v1.getMagnitude();
    float expected = sqrt(14.);
    ASSERT_EQ(result, expected);
}

