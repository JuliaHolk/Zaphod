//
// Created by julia on 04.07.18.
//

#ifndef ZAPHOD_MASTER_RAY_H
#define ZAPHOD_MASTER_RAY_H

#include "Vec.h"


class Ray {
    //Ray has a starting point (Vec3D) and a direction (Vec3D)
    Vec3D start;
    Vec3D direction;



public:
        //constructor

        Ray();
        Ray(Vec3D st, Vec3D dir);

        //methods
        //getters

        Vec3D getst() { return start; }

        Vec3D getdir() { return direction; }


};


#endif //ZAPHOD_MASTER_RAY_H
