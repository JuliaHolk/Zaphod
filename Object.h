//
// Created by julia on 12.07.18.
//

#ifndef ZAPHOD_MASTER_OBJECT_H
#define ZAPHOD_MASTER_OBJECT_H


#include "Vec.h"
#include "Colour.h"
#include "Ray.h"

class Object {
    public:
        Vec3D position;
        Colour colour;

        //methods

        //getter

        Colour getcol(){ return colour; }

        virtual double intersect(Ray ray){}

        double shadow(Vec3D lightsource, Ray ray, Object o);

        virtual double diffuse(Vec3D lightsource, Ray ray){}

};


#endif //ZAPHOD_MASTER_OBJECT_H
