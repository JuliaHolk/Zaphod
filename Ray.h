//
// Created by julia on 04.07.18.
//

#ifndef ZAPHOD_MASTER_RAY_H
#define ZAPHOD_MASTER_RAY_H

#include "Vec.h"


class Ray {
    //Ray has a starting point (Vector) and a direction (Vector)
    Vector start;
    Vector direction;

    private:
        //constructor
        Ray();

        Ray(Vector st, Vector dir);

    public:
        //methods
        //getters
        Vector getst() { return start; }

        Vector getdir() { return direction; }
};


#endif //ZAPHOD_MASTER_RAY_H
