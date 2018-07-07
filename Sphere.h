//
// Created by julia on 04.07.18.
//

#ifndef ZAPHOD_MASTER_SPHERE_H
#define ZAPHOD_MASTER_SPHERE_H

#include "Colour.h"
#include "Vec.h"
#include "Ray.h"
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

    Vec3D intersect(Ray ray);


    //von vorher:

    //bool intersect(Ray ray, double d);
    //Vec3D hitpoint(Ray ray, Sphere sphere);
};

#endif //ZAPHOD_MASTER_SPHERE_H
