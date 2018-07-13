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

    Vec3D position;
    double distance;
    Colour colour;

    public:

        //constructor

        Plane(Vec3D normal, double dist, Colour col);

        //methods
        //getters

        Vec3D normal() { return position; }
        double dist() { return distance; }

        //intersection function

        virtual double intersect(Ray ray) override;

        virtual double diffuse(Vec3D lightsource, Ray ray) override;


};


#endif //ZAPHOD_MASTER_PLANE_H
