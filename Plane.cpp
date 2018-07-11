//
// Created by irini on 11.07.2018.
//

#include <cmath>
#include "Plane.h"


Plane::Plane(Vec3D normal, double dist, Colour col) {
    planenormal = normal;
    distance = dist;
    colour = col;

}

double Plane::intersect(Ray ray) {
    double V_d = planenormal*(1/planenormal.length()) * ray.getdir();

    if (V_d == 0) {
        return INFINITY;
    }

}
