//
// Created by irini on 11.07.2018.
//

#include <cmath>
#include "Plane.h"


Plane::Plane(Vec3D normal, double dist, Colour col) {
    position = normal.normed();      //for plane, position vector is the normal vector of plane surface
    distance = dist;
    colour = col;

}

double Plane::intersect(Ray ray) {
    double V_d = position * ray.getdir();

    if (V_d == 0 ) {
        return INFINITY;
    }
    else {
            double V0 = ((ray.getst() * position) - distance)*-1;
            double t = V0 * (1/V_d);
            if (t > 0) return t;
            else return INFINITY;

    }

//t= (dist + ray.start*normed_normal)/(ray-dir*normed_Normal)

}

double Plane::diffuse(Vec3D lightsource, Ray ray) {
    Vec3D surface_Vec = ray.getst() + ray.getdir()*intersect(ray);      //intersection point
    Vec3D shadowvec = surface_Vec - lightsource;      //Vector between intersection point and lightsource
    Vec3D norm_Shadowvec = shadowvec * (1/shadowvec.length());
    double diffuse = norm_Shadowvec * position * -1;
    return diffuse;
}
