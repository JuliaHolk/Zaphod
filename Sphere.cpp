//
// Created by julia on 04.07.18.
//

#include "Sphere.h"
#include "Vec.h"
#include "Colour.h"

Sphere::Sphere(Vector cent, double rad, Colour col(double r, double b, double g)) {
    cent=centre;
    rad=radius;
    col=colour;
}

bool Sphere::makesphere(Vector cent, double rad) {
    Vector vs; //set of points on the surface
    Vector vn=vs.diff(cent);
    if (vn.lsq()<=rad*rad) {
        return true;
    }else {
        return false;
    }
}
