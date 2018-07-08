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
    camPosition=campos;
    camDirection=camdir;
    xDirection=xDir;
    yDirection=yDir;
    xpixel=xpix;
    ypixel=ypix;
    imageDistance=imDis;
    image=bitmap_image(xpix,ypix);
}

//function to set colour for pixels
void Camera::setpixel(int x, int y, Colour c) {
    image.set_pixel(x,y,(unsigned char)(c.getr()*255),(unsigned char)(c.getg()*255),(unsigned char)(c.getb()*255));
}

//function to save image as bitmap
void Camera::output(std::string path) {
    image.save_image(path);


}


