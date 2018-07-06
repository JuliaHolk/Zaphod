//
// Created by irini on 05.07.18.
//

#ifndef ZAPHOD_MASTER_CAMERA_H
#define ZAPHOD_MASTER_CAMERA_H

#include "Colour.h"
#include "Vec.h"
#include "Sphere.h"
#include "Ray.h"

class Camera{

    private:
        double camPosition; //Position der Kamera
        Vector camDirection; // Blickrichtung der Kamera
        Vector xDirection; // Ausdehnung in x
        Vector yDirection; // Ausdehnung in y
        int xpixel; //Pixel des Bilds in x-Richtung
        int ypixel; // Pixel des Bilds in y-Richtung
        double imageDistance; // Abstand von Position zum Bild

        



       // Augpunkt
       // Ansichtspunkt/Zentrum
       // Ausdehnung
};


#endif //ZAPHOD_MASTER_CAMERA_H
