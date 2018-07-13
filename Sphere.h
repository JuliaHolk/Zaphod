//
// Created by julia on 04.07.18.
//

#ifndef ZAPHOD_MASTER_SPHERE_H
#define ZAPHOD_MASTER_SPHERE_H

#include "Colour.h"
#include "Vec.h"
#include "Ray.h"
#include "Object.h"
#include <cmath>


class Sphere : public Object {
    //sphere is defined by center (class Vec3D), radius (double) and colour (class Colour)

    double radius;


    public:
        //constructor

        Sphere(Vec3D cent, double rad, Colour col);

        //methods
        //getters

        Vec3D getcent() { return position; }

        double getrad() { return radius; }

        Colour getcol() override { return colour; }

        //intersection

        double intersect(Ray ray) override ;

        //diffuse shading

        double diffuse(Vec3D lightsource, Ray ray) override;

        //cast shadows

        //double shadow(Vec3D lightsource, Ray ray, Sphere s);


};

#endif //ZAPHOD_MASTER_SPHERE_H
