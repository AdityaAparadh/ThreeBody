#include "../Headers/scene.h"


Scene::Scene() {
    objects = std::vector<Object*>();
}

void Scene::addObject(Object* obj) {
    objects.push_back(obj);
}

void Scene::Update(float delta) {
    for (auto obj : objects) {
        obj->Update(delta);
    }
}