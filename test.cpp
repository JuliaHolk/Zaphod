//
// Created by julia on 08.07.18.
//
#include "Sphere.h"
#include "scene.h"
#include "Camera.h"
#include "Colour.h"
#include "Vec.h"
#include <vector>
#include "Lightsource.h"

//first test for scene with sphere
int main(){
    Scene scene;

    Camera cam(Vec3D(0,0,0), Vec3D(0,0,1), Vec3D(0.001,0,0), Vec3D(0,0.001,0), 1000, 1000, 1);
    scene.setcam(cam);

    Colour background(0.1,0.2,0.1);
    scene.setBackground(background);

    Vec3D light(-10, 0, 13);
    scene.addLight(light);

    Sphere sphere(Vec3D(3,0,13), 2.5, Colour(0.5,1,0.8));
    Sphere sphere1(Vec3D (-3,0,13), 1, Colour(0.5,1,1));
    scene.addObject(sphere);
    scene.addObject(sphere1);

    scene.renderScene();
}