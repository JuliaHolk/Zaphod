//
// Created by irini on 05.07.18.
//

#ifndef ZAPHOD_MASTER_CAMERA_H
#define ZAPHOD_MASTER_CAMERA_H

#include <vector>
#include "Colour.h"
#include "Vec.h"
#include "Sphere.h"
#include "Ray.h"
#include "bitmap_image.hpp"
#include <string>

class Camera{

    private:
        Vec3D camPosition;      //Position Camera
        Vec3D camDirection;     //Direction Camera
        Vec3D xDirection;
        Vec3D yDirection;
        unsigned int xpixel;    //Pixel image x-direction
        unsigned int ypixel;    //Pixel image y-direction
        double imageDistance;   //Distance position-image
        bitmap_image image;

    public:
        //constructors

        Camera(Vec3D campos, Vec3D camdir, Vec3D xDir, Vec3D yDir, unsigned int xpix, unsigned int ypix, double imDis);

        Camera(): Camera(Vec3D(0,0,0), Vec3D(0,0,1), Vec3D(0.01,0,0), Vec3D(0,0.01,0), 100, 100, 1){};

        //functions

        //setters

        Vec3D campos(){ return camPosition; }
        Vec3D camdir(){ return camDirection; }
        Vec3D xDir(){ return xDirection; }
        Vec3D yDir(){ return yDirection; }
        unsigned int xpix(){ return xpixel; }
        unsigned int ypix(){ return ypixel; }
        double imDis(){ return imageDistance; }

        //setter for pixelcolour
        void setpixel(int x, int y, Colour c);

        void output(std::string path);



};


#endif //ZAPHOD_MASTER_CAMERA_H
