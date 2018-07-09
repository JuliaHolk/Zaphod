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
    Colour background(1,1,1);
    scene.setBackground(background);
    Sphere sphere(Vec3D(0,0,15), 3, Colour(1,1,0));
    Sphere sphere1(Vec3D (3,0,10), 1, Colour(0,0.5,1));
    scene.addObject(sphere);
    scene.addObject(sphere1);
    scene.renderScene();

}