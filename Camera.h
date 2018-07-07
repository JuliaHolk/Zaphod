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
        Vector camPosition; //Position Camera
        Vector camDirection; //Direction Camera
        Vector xDirection;
        Vector yDirection;
        unsigned int xpixel; //Pixel image x-direction
        unsigned int ypixel; // Pixel image y-direction
        double imageDistance; // Distance position-image

    public:
        Camera(Vector campos, Vector camdir, Vector xDir, Vector yDir, unsigned int xpix, unsigned int ypix, double imDis);

        Vector campos();
        Vector camdir();
        Vector xDir();
        Vector yDir();
        unsigned int xpix();
        unsigned int ypix();
        double imDis();



};


#endif //ZAPHOD_MASTER_CAMERA_H
