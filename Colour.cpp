//
// Created by m1722682 on 7/2/18.
//

#include "Colour.h"


Colour::Colour(double red, double blue, double green) {
    r = red;
    b = blue;
    g = green;
}

Colour Colour::operator*(double a) {Colour newc(r*a, b*a, g*a);
    return newc;
}



