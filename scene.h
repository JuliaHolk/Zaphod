//
// Created by m1722682 on 7/2/18.
//test

#ifndef ZAPHOD_SCENE_H
#define ZAPHOD_SCENE_H

#include "Sphere.h"
#include "Camera.h"
#include <vector>

class Scene {
    private:
        std::vector<Sphere> objects;
        Camera camera;

    public:
        //constructor

        Scene(){}

        //sets a camera for the scene
        void setcam(Camera c){
            camera=c;
        }

        //adds Objects to vector objects
        void addObject(Sphere s){
            objects.push_back(s);
        }

        //render function
        void renderScene();


};

#endif //ZAPHOD_SCENE_H
