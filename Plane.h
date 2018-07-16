//
// Created by irini on 11.07.2018.
//

#ifndef ZAPHOD_MASTER_PLANE_H
#define ZAPHOD_MASTER_PLANE_H


#include "Vec.h"
#include "Colour.h"
#include "Ray.h"
#include "Object.h"

class Plane : public Object {

    double distance;

    public:

        //constructor

        Plane(Vec3D normal, double dist, Colour col);

        //methods
        //getters

        Vec3D normal() { return position; }
        double dist() { return distance; }

        //intersection function

        double intersect(Ray ray) override ;

        double diffuse(Vec3D lightsource, Ray ray);


};


#endif //ZAPHOD_MASTER_PLANE_H
