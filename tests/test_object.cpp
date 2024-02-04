#include <gtest/gtest.h>
#include "../Headers/vector.h"
#include "../Headers/eulerObject.h"

TEST(ObjectTest, ConstructorAndGetterSettersTest){

    EulerObject obj(1);

    ASSERT_EQ(obj.getMass(), 1);
    ASSERT_EQ(obj.getPosition().getX(), 0);

    EulerObject obj2(2, Vector(1, 1, 1));
    ASSERT_EQ(obj2.getMass(), 2);
    ASSERT_EQ(obj2.getPosition().getX(), 1);
    ASSERT_EQ(obj2.getPosition().getY(), 1);
    ASSERT_EQ(obj2.getPosition().getZ(), 1);

    EulerObject obj3(3, Vector(1, 1, 1), Vector(2, 2, 2));
    ASSERT_EQ(obj3.getMass(), 3);
    ASSERT_EQ(obj3.getPosition().getX(), 1);
    ASSERT_EQ(obj3.getPosition().getY(), 1);
    ASSERT_EQ(obj3.getPosition().getZ(), 1);
    ASSERT_EQ(obj3.getVelocity().getX(), 2);
    ASSERT_EQ(obj3.getVelocity().getY(), 2);

    EulerObject obj4(4, Vector(1, 1, 1), Vector(2, 2, 2), Vector(3, 3, 3));
    ASSERT_EQ(obj4.getMass(), 4);
    ASSERT_EQ(obj4.getPosition().getX(), 1);
    ASSERT_EQ(obj4.getPosition().getY(), 1);
    ASSERT_EQ(obj4.getPosition().getZ(), 1);
    ASSERT_EQ(obj4.getVelocity().getX(), 2);
    ASSERT_EQ(obj4.getVelocity().getY(), 2);
    ASSERT_EQ(obj4.getAcceleration().getX(), 3);
    ASSERT_EQ(obj4.getAcceleration().getY(), 3);
    ASSERT_EQ(obj4.getAcceleration().getZ(), 3);

    obj.setMass(5);
    obj.setPosition(Vector(4, 4, 4));
    obj.setVelocity(Vector(5, 5, 5));
    obj.setAcceleration(Vector(6, 6, 6));

    ASSERT_EQ(obj.getMass(), 5);
    ASSERT_EQ(obj.getPosition().getX(), 4);
    ASSERT_EQ(obj.getPosition().getY(), 4);
    ASSERT_EQ(obj.getPosition().getZ(), 4);

}

TEST(ObjectTest, ApplyForceTest){

    EulerObject obj(1, Vector(1, 1, 1), Vector(1, 1, 1), Vector(0, 0, 0));

    obj.applyForce(Vector(1, 1, 1));

    ASSERT_EQ(obj.getAcceleration().getX(), 1);
    ASSERT_EQ(obj.getAcceleration().getY(), 1);
    ASSERT_EQ(obj.getAcceleration().getZ(), 1);

    obj.applyForce(Vector(1, 1, 1));

    ASSERT_EQ(obj.getAcceleration().getX(), 2);
    ASSERT_EQ(obj.getAcceleration().getY(), 2);
    ASSERT_EQ(obj.getAcceleration().getZ(), 2);

}

TEST(ObjectTest, UpdateTest){

    EulerObject obj(1, Vector(1, 1, 1), Vector(1, 1, 1), Vector(1, 1, 1));

    obj.Update(1);

    ASSERT_EQ(obj.getVelocity().getX(), 2);
    ASSERT_EQ(obj.getVelocity().getY(), 2);
    ASSERT_EQ(obj.getVelocity().getZ(), 2);
    ASSERT_EQ(obj.getPosition().getX(), 3);
    ASSERT_EQ(obj.getPosition().getY(), 3);
    ASSERT_EQ(obj.getPosition().getZ(), 3);
    ASSERT_EQ(obj.getAcceleration().getX(), 0);
    ASSERT_EQ(obj.getAcceleration().getY(), 0);
    ASSERT_EQ(obj.getAcceleration().getZ(), 0);

    obj.applyForce(Vector(1, 1, 1));
    obj.Update(1);

    ASSERT_EQ(obj.getVelocity().getX(), 3);
    ASSERT_EQ(obj.getVelocity().getY(), 3);
    ASSERT_EQ(obj.getVelocity().getZ(), 3);
    ASSERT_EQ(obj.getPosition().getX(), 6);
    ASSERT_EQ(obj.getPosition().getY(), 6);
    ASSERT_EQ(obj.getPosition().getZ(), 6);
    ASSERT_EQ(obj.getAcceleration().getX(), 0);
    ASSERT_EQ(obj.getAcceleration().getY(), 0);
    ASSERT_EQ(obj.getAcceleration().getZ(), 0);

}