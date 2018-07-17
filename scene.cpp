//
// Created by m1722682 on 7/2/18.
//

#include "scene.h"
#include <cstdio>
#include <cmath>
#include <iostream>

void Scene::renderScene() {

    for(int i=0; camera.xpix()>i; i++){        //for all pixels in x direction
        for(int j=0; camera.ypix()>j; j++){     //for all pixels in y direction --> for every pixel in image
            Vec3D dir = camera.camdir()*(camera.imDis()/camera.camdir().length())
                    - camera.xDir()*0.5*camera.xpix() + camera.xDir()*i
                    - camera.yDir()*0.5*camera.ypix() + camera.yDir()*j;     //direction of Ray that is shot from camera to pixel for all pixels in image
            Ray r(camera.campos(), dir);        //Ray that is shot from camera to pixel f.a. pixels in image
            double nearestT=INFINITY;
            int nearestObjNum=-1;   //save position in vector of nearest object
            for(int k=0; k<objects.size(); k++){
                double t = (*objects[k]).intersect(r);     //calculates intersection for every object in vector
                if(t<nearestT){
                    nearestT=t;
                    nearestObjNum=k;       //sets nearest object for each ray to object with smallest t (first object the ray hits)
                }
            }
            if(nearestT==INFINITY){
                camera.setpixel(i, j, background);      //if ray does not hit object (t is infinite), pixel colour is background colour
            }
            else {
                Colour pixelcolour = (*objects[nearestObjNum]).getcol();   //pixel colour is colour of nearest object

                            double diff = (*objects[nearestObjNum]).diffuse(lightsource, r);
                            if (diff > 0) {
                                double defshadow=1;
                                Colour diff_pixelcolour = pixelcolour * (*objects[nearestObjNum]).diffuse(lightsource, r);     //pixelcolour is colour of nearest object*diffuse shading factor
                                for(int m=0; m<objects.size(); m++) {
                                    double shadow=(*objects[nearestObjNum]).shadow(lightsource, r, objects[m]);    //shadow returns 0, no shadow returns 1
                                    if (shadow == 0) { defshadow = shadow; }
                                }
                                camera.setpixel(i, j, diff_pixelcolour * defshadow);        //if there is shadow, colour is black, if there is no shadow, colour is diff_pixelcolour
                            } else {
                                camera.setpixel(i, j, Colour(0, 0, 0));     //if diff is <= 0, pixel is black (object not illuminated in this point)
                            }

                }
            }
        }
    camera.output("raytrace.bmp");      //saves bitmap
}

