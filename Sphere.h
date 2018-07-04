//
// Created by julia on 04.07.18.
//

#ifndef ZAPHOD_MASTER_SPHERE_H
#define ZAPHOD_MASTER_SPHERE_H

#include "Colour.h"
#include "Vec.h"


class Sphere {
    //sphere is defined by center (class Vector), radius (double) and colour (class Colour)
    Vector centre;
    double radius;
    Colour colour(double r, double b, double g);

    private:
    //constructor

    Sphere(Vector cent, double rad, Colour col(double r, double b, double g));

    //methods
    //create sphere??
    bool makesphere(Vector cent, double rad);

};


#endif //ZAPHOD_MASTER_SPHERE_H
