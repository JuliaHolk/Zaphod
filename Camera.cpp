//
// Created by irini on 05.07.18.
//

#include "Camera.h"
#include "Vec.h"
#include "Colour.h"
#include "Sphere.h"
#include "bitmap_image.hpp"
#include <math.h>

Camera::Camera(Vec3D campos, Vec3D camdir, Vec3D xDir, Vec3D yDir, unsigned int xpix, unsigned int ypix, double imDis) {
    camPosition=campos;     //position of camera (usually in point of origin)
    camDirection=camdir;    //direction of camera (usually in z-direction)
    xDirection=xDir;        //Vector for direction of x-pixel
    yDirection=yDir;        // "            "         y-pixel
    xpixel=xpix;            //number of x-pixels
    ypixel=ypix;            // "    "   y-pixels
    imageDistance=imDis;    //distance of picture from camera
    image=bitmap_image(xpix,ypix);      //bitmap image with number of x-pixels and y-pixels
}

//function to set colour for pixels
void Camera::setpixel(int x, int y, Colour c) {
    image.set_pixel(x,y,(unsigned char)(c.getr()*255),(unsigned char)(c.getg()*255),(unsigned char)(c.getb()*255));
}

//function to save image as bitmap
void Camera::output(std::string path) {
    image.save_image(path);

}


