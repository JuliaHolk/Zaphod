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
        Vec3D camPosition; //Position Camera
        Vec3D camDirection; //Direction Camera
        Vec3D xDirection;
        Vec3D yDirection;
        unsigned int xpixel; //Pixel image x-direction
        unsigned int ypixel; // Pixel image y-direction
        double imageDistance; // Distance position-image

    public:
        Camera(Vec3D campos, Vec3D camdir, Vec3D xDir, Vec3D yDir, unsigned int xpix, unsigned int ypix, double imDis);

        Vec3D campos();
        Vec3D camdir();
        Vec3D xDir();
        Vec3D yDir();
        unsigned int xpix();
        unsigned int ypix();
        double imDis();



};


#endif //ZAPHOD_MASTER_CAMERA_H
