//
// Created by m1722682 on 7/2/18.
//

#include "scene.h"
#include <stdio.h>
#include <math.h>
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
                double t = objects[k].intersect(r);     //calculates intersection for every object in vector
                if(t<nearestT){
                    nearestT=t;
                    nearestObjNum=k;       //sets nearest object for each ray to object with smallest t (first object the ray hits)
                }
            }
            Colour pixelcolour = objects[nearestObjNum].getcol();   //pixel colour is colour of nearest object
            camera.setpixel(i, j, pixelcolour);     //sets pixel colour in image to colour of nearest Object
                                                    //for no intersection pixel colour is black
        }
    }
    camera.output("raytrace.bmp");      //saves bitmap
}

