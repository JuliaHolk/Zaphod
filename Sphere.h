//
// Created by julia on 04.07.18.
//

#ifndef ZAPHOD_MASTER_SPHERE_H
#define ZAPHOD_MASTER_SPHERE_H

#include "Colour.h"
#include "Vec.h"
#include "Ray.h"
#include "Lightsource.h"
#include <cmath>


class Sphere {
    //sphere is defined by center (class Vec3D), radius (double) and colour (class Colour)
    Vec3D centre;
    double radius;
    Colour colour;


public:
    //constructor

    Sphere(Vec3D cent, double rad, Colour col);

    //methods
    //getters

    Vec3D getcent() { return centre; }

    double getrad() { return radius; }

    Colour getcol() { return colour; }

    //intersection

    double intersect(Ray ray);

    //diffuse shading

    double diffuse(Vec3D lightsource, Ray ray);

    //cast shadows

    double shadowintersect(Vec3D lightsource, Ray ray, Sphere s);

    double shadow(Vec3D lightsource, Ray ray, Sphere s);


};

#endif //ZAPHOD_MASTER_SPHERE_H
