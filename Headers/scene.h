#ifndef SCENE_H
#define SCENE_H

#include <vector>       // This is the C++ STL vector, not our

#include "eulerObject.h"
#include "vector.h"


class Scene {

public:

    std::vector<Object*> objects;

    Scene();


    void addObject(Object* obj);
    void Update(float delta);


};



#endif
