//
// Created by julia on 04.07.18.
//

#include "Ray.h"
#include "Vec.h"

Ray::Ray() {}

Ray::Ray(Vec3D st, Vec3D dir) {
    start=st;
    direction=dir;
}

