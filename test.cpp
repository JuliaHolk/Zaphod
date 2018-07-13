//
// Created by julia on 08.07.18.
//
#include "Sphere.h"
#include "scene.h"
#include "Camera.h"
#include "Colour.h"
#include "Vec.h"
#include <vector>

//first test for scene with sphere
int main(){
    Scene scene;

    Camera cam(Vec3D(0,0,0), Vec3D(0,0,1), Vec3D(0.001,0,0), Vec3D(0,0.001,0), 1000, 1000, 1);
    scene.setcam(cam);

    Colour background(0.1,1,0.1);
    scene.setBackground(background);

    Vec3D light(-3, 0, 0);
    scene.addLight(light);

    Sphere sphere(Vec3D(4,0,26), 7, Colour(0.5,1,0.8));
    Sphere sphere1(Vec3D(-1.5,0,9), 0.5, Colour(0.5,1,1));
    Sphere sphere2(Vec3D(2,1.5,12), 1, Colour(0.9,0.3,0.9));

    Plane plane(Vec3D(1,0,0), 10, Colour(1,0.5,0.5));

    scene.addObject(sphere);
    scene.addObject(sphere1);
    scene.addObject(sphere2);

  //  scene.addObject(plane);

    scene.renderScene();
}