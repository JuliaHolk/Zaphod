//
// Created by irini on 09.07.18.
//

#include "Lightsource.h"
#include "Colour.h"
#include "Vec.h"
#include <math.h>

Lightsource::Lightsource (Colour col, Vec3D lpos) {
    colour=col;
    lightPosition=lpos;

    
}