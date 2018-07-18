//
// Created by julia on 08.07.18.
//
#include "Sphere.h"
#include "scene.h"
#include "Camera.h"
#include "Colour.h"
#include "Vec.h"
#include <vector>
#include <cstdio>
#include <cstdlib>

using namespace std;

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"


int main(){
    Scene scene;

    Camera cam;
    scene.setcam(cam);

    printf("Set background\n I only know rbg values (three doubles from 0 to 1)!\n");
    double red, blue, green;
    scanf("%lf", &red);
    if(red>1) { printf("Don't you read what I tell you?!\n" KMAG); return 0; }
    if(red<0) { printf("What am I supposed to do with that?!\n" KMAG); return 0;}
    scanf("%lf", &blue);
    if(blue>1) { printf("Seriously?\n" KMAG); return 0; }
    if(blue<0) { printf("Oh come on...\n" KMAG); return 0; }
    scanf("%lf", &green);
    if(green>1) { printf("What don't you understand?\n" KMAG); return 0; }
    if(green<0) { printf("It's not that hard, is it?\n" KMAG); return 0; }
    Colour background(red,blue,green);
    scene.setBackground(background);

    printf("Set location of lightsource in x,y,z-Coordinates\n");
    printf(KRED "Note that the camera is located in the origin.\n" KNRM);
    double x,y,z;
    scanf("%lf", &x);
    scanf("%lf", &y);
    scanf("%lf", &z);
    Vec3D light(x, y, z);
    scene.addLight(light);

    printf("Now, the main part.\n How many spheres does your scene need? Won't do more than 10, though.\n");
    unsigned int n;
    scanf("%u",&n);
    if (n==666) {
        printf(KRED "What have you done? \n");
        printf(KMAG "lä! lä! \n Cthulhu fhtagn! \n Ph'nglui mglw'nafh Cthulhu R'lyeh wgah'nagl fhtagn \n...\n "
                    KGRN "^(;,;)^\n" KNRM);
        return 0;
    }
    if (n==42) { printf(KGRN "Oh no, not again...\n"); return 0; }
    else {
        if(n<0, n>11) { printf(KYEL "That's not allowed D:<\n"); return 0; }
        else{
            for(int k=1; k<=n; k++){
                printf("Next step: set Coordinates for the centre of %d. sphere:\n", k);
                double xc,yc,zc;
                scanf("%lf", &xc);
                scanf("%lf", &yc);
                scanf("%lf", &zc);
                printf("Now: how big shall your sphere Nr.%d be? (I need the radius!!)\n", k);
                double rad;
                scanf("%lf",&rad);
                printf("Not to forget, your sphere %d needs a colour (remember what I told you about colours?)\n", k);
                double reds, blues, greens;
                scanf("%lf", &reds);
                if(reds>1) { printf(KRED "N o p e \n"); return 0; }
                if(reds<0) { printf(KRED "no good...\n"); return 0; }
                scanf("%lf", &blues);
                if(blues>1) { printf(KRED "Really?\n"); return 0; }
                if(blues<0) { printf(KRED "Please pay attention when I tell you things.\n"); return 0; }
                scanf("%lf", &greens);
                if(greens>1) { printf(KRED "Yeah, right...\n"); return 0; }
                if(greens<0) { printf(KRED "don't make me aggressive\n"); return 0; }
                scene.addObject(new Sphere(Vec3D(xc,yc,zc), rad, Colour(reds,blues,greens)));
            }
            printf("rendering...");
        }
    }
    //scene.addObject(new Sphere(Vec3D(4,0,26), 6, Colour(1,1,0.3)));
    //scene.addObject(new Sphere(Vec3D(-1.5,0,15), 1.5, Colour(0.5,1,0.5)));

    scene.addObject(new Plane(Vec3D(0,-1,0), -4.5, Colour(1,0.5,0.5)));


    scene.renderScene();
    printf(KGRN "check your files :)");
}