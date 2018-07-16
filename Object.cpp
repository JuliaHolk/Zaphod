//
// Created by julia on 12.07.18.
//

#include <cmath>
#include "Object.h"

int Object::shadow(Vec3D& lightsource, Ray& ray, Object*& o) {
    Vec3D intersect_Vec=ray.getst() + ray.getdir() * intersect(ray);      //intersection point
    Vec3D shadowvec=lightsource - intersect_Vec;
    Ray shadowray(intersect_Vec, shadowvec);
    double hit=(*o).intersect(shadowray);

    if (hit<INFINITY && hit > 1e-10){
        return 0;
    }
    else {
        return 1;
    }
}

Object::Object(Vec3D pos, Colour col) {
    position = pos;
    colour = col;
}

