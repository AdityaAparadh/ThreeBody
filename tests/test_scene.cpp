#include <gtest/gtest.h>
#include "../Headers/scene.h"


TEST(SceneTest, AddObjectTest) {
    Scene scene;
    Object* obj = new EulerObject(1);
    scene.addObject(obj);
    scene.addObject(obj);
    ASSERT_EQ(scene.objects.size(), 2);
    ASSERT_EQ(scene.objects[0]->getMass(), 1);
    delete obj;
}

TEST(SceneTest, UpdateTest) {
    Scene scene;
    Object* obj = new EulerObject(1);
    scene.addObject(obj);
    scene.objects[0]->applyForce(Vector(1, 1, 1));
    scene.Update(1);
    ASSERT_EQ(scene.objects[0]->getMass(), 1);
    delete obj;
}