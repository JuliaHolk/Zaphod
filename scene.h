//
// Created by m1722682 on 7/2/18.
//test

#ifndef ZAPHOD_SCENE_H
#define ZAPHOD_SCENE_H

#include "Sphere.h"
#include "Camera.h"
#include <vector>
#include "Colour.h"
#include "Plane.h"

class Scene {
    private:
        std::vector<Object *> objects;
        Camera camera;
        Colour background;
        Vec3D lightsource;

    public:
        //constructor

        Scene(){}

        //sets a camera for the scene
        void setcam(Camera c){
            camera=c;
        }

        //adds Objects to vector objects
        void addObject(Sphere* s){
            objects.push_back(s);
        }

        void addObject(Plane* p){
            objects.push_back(p);
        }

        //add Lightsource

        void addLight(Vec3D light){
            lightsource = light;
        }

        //set background
        void setBackground(Colour bg){
            background = bg;
        }

        //render function
        void renderScene();


};

#endif //ZAPHOD_SCENE_H
