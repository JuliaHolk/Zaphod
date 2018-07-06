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
    //sphere is defined by center (class Vector), radius (double) and colour (class Colour)
    Vector centre;
    double radius;
    Colour colour;

private:

    //constructor

    Sphere(Vector cent, double rad, Colour col);

public:
    //methods
    //getters

    Vector getcent() { return centre; }

    double getrad() { return radius; }

    Colour getcol() { return colour; }

    //intersection

    Vector intersect(Ray ray, double d);


    //von vorher:

    //bool intersect(Ray ray, double d);
    //Vector hitpoint(Ray ray, Sphere sphere);
};

#endif //ZAPHOD_MASTER_SPHERE_H
