#ifndef GRAVITY_CPP
#define GRAVITY_CPP

#include "../Headers/scene.h"
#include <cmath>

void Gravitate( Scene& scene, float delta ) {

    const float G = 6.674e-11;


    for ( int i = 0; i < scene.objects.size() - 1 ; i++ ){
        for ( int j = i+1; j < scene.objects.size() ; j++ ){
                Vector direction =scene.objects[j]->getPosition() - (scene.objects[i]->getPosition() ) ;

                //Clamping distance to avoid shooting off to infinity
                float distance = std::min(direction.getMagnitude(),1.0e3f);

                direction.normalize();
                float magnitude = (G * scene.objects[i]->getMass() * scene.objects[j]->getMass())/(std::pow(distance,2));
                scene.objects[i]->applyForce(direction.multiplyWith(magnitude));
                scene.objects[j]->applyForce(direction.multiplyWith(magnitude*-1));
        }
    }
}

#endif