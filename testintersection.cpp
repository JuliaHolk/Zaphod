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
    Vector st(0.0,0.0,0.0);
    Vector dir(1.0,1.0,1.0);
    Ray ray(st, dir);
    Vector cent(42.0,42.0,42.0);
    Colour green(0.0,0.0,1.0);
    double r=5;
    Sphere sphere(cent, r, green);
    Vector hitpoint=sphere.intersect(ray);
    double x=hitpoint.getx();
    double y=hitpoint.gety();
    double z=hitpoint.getz();

    std::cout << "Hitpoint Vector(" << x << "," << y << "," << z << ")" << std::endl;

    return 0;
}
