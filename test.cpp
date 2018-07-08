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
    Camera cam; //default camera
    scene.setcam(cam);
    Sphere sphere(Vec3D(0,0,1), 2, Colour(0,0,1));  //creates green sphere
    scene.addObject(sphere);
    scene.renderScene();

}