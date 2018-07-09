//
// Created by irini on 09.07.18.
//

#ifndef ZAPHOD_MASTER_LIGHTSOURCE_H
#define ZAPHOD_MASTER_LIGHTSOURCE_H

#include "Colour.h"
#include "Vec.h"
#include "Ray.h"
#include "Sphere.h"

class Lightsource {
        //pointed lightsource
        Colour colour; //Colour Lightsource
        Vec3D lightPosition; //Position Lightsource

    public:

    //constructors

    Lightsource(Colour col, Vec3D lpos);

    Lightsource() {}


    //getters

    Colour col(){ return colour; }
    Vec3D lpos(){ return lightPosition; }


};

#endif //ZAPHOD_MASTER_LIGHTSOURCE_H
