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

        //constructors
        Object(Vec3D pos, Colour col);

        Object(){}

        //methods

        //getter
        virtual Colour getcol(){ return colour; }

        //Object-Ray intersection
        virtual double intersect(Ray ray){}

        //shadowcasting
        int shadow(Vec3D& lightsource, Ray& ray, Object*& o);

        //diffuse shadowing
        virtual double diffuse(Vec3D lightsource, Ray ray){}

};


#endif //ZAPHOD_MASTER_OBJECT_H
