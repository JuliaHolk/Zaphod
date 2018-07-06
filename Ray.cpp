//
// Created by julia on 04.07.18.
//

#include "Ray.h"
#include "Vec.h"

Ray::Ray() {}

Ray::Ray(Vector st, Vector dir) {
    start=st;
    direction=dir;
}

