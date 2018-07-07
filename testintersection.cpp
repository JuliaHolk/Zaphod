//
// Created by julia on 06.07.18.
//
#include <cstdio>
#include <cmath>
#include "Vec.h"
#include "Colour.h"
#include "Sphere.h"
#include "Ray.h"
#include <iostream>
int main(){
    Vec3D st(0.0,0.0,0.0);
    Vec3D dir(0,0.0,2.0);
    Ray ray(st, dir);
    Vec3D cent(0,0,42.0);
    Colour green(0.0,0.0,0.5);
    double r=2.0;
    Sphere sphere(cent, r, green);
    Vec3D hitpoint=sphere.intersect(ray);
    double x=hitpoint.getx();
    double y=hitpoint.gety();
    double z=hitpoint.getz();

    std::cout << "Hitpoint Vec3D(" << x << "," << y << "," << z << ")" << std::endl;

    return 0;
}
