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

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define ITAL  "\x1B[3m"


int main(){
    Scene scene;

    Camera cam;
    scene.setcam(cam);
    printf("Do you want to use default settings? Please press 1 for yes and 0 for no.");
    int def;
    scanf("%d", &def);

    double red =0, blue = 0.2, green = 0;
    double x = 0, y = -10, z = 0;
    double reds=0.5, blues=0, greens=0.3;
    double rad=3;
    double xc=0,yc=-2,zc=10;

    if (def == 0) {
        printf("Set background:\n I only know rbg values (three doubles from 0 to 1)!\n");
        scanf("%lf", &red);
        if (red > 1 || red < 0) { printf("Don't you read what I tell you?!\n" KMAG); return 0; }
        scanf("%lf", &blue);
        if (blue > 1 || blue < 0) { printf("Seriously?\n"); return 0; }
        scanf("%lf", &green);
        if (green > 1 || green < 0) { printf("What don't you understand?\n"); return 0; }


        printf("Set location of lightsource in x,y,z-Coordinates\n");
        printf(KRED "Note that the camera is located in the origin.\n"
               KBLU "Also note that there is a plane at x=-1.\n" KNRM);
        scanf("%lf", &x);
        scanf("%lf", &y);
        scanf("%lf", &z);

        printf("Now, the main part.\n How many spheres does your scene need? Won't do more than 41, though.\n");
        int n;
        scanf("%d", &n);

        //easteregg
        if (n == 666) {
            printf(KRED "What have you done? \n");
            printf(KMAG ITAL "lä! lä! \n Cthulhu fhtagn! \n Ph'nglui mglw'nafh Cthulhu R'lyeh wgah'nagl fhtagn \n...\n "
                   KGRN "^(;,;)^\n" KNRM);
            return 0;
        }

        //easteregg
        if (n == 42) {
            printf(KNRM"\n"
                   "                       \\  |  / \n"
                   "                        | | |\n"
                   "\n"
               KMAG"                       (^^^^^)\n"
                   "                        \\   /\n"
               KGRN"                         `|`        Oh no, not again...\n"
                   "                          | \n"
                   "                       (\\ |\n"
                   "                      __\\||/)___\n"
                KYEL"                     |__________|\n"
                   "                       \\      /  \n"
                   "                        \\____/\n");
            return 0;
        }

        else {
            if (n < 0 || n > 41) {
                printf(KCYN "So, you like to live dangerously?\n");
                return 0;
            }
            else {
                for (int k = 1; k <= n; k++) {
                    printf("Next step: set Coordinates for the centre of %d. Sphere:\n", k);
                    scanf("%lf", &xc);
                    scanf("%lf", &yc);
                    scanf("%lf", &zc);

                    printf("Now: how big shall your Sphere Nr.%d be? (I need the radius!!)\n", k);
                    scanf("%lf", &rad);

                    printf("Not to forget, your Sphere %d needs a colour (remember what I told you about colours?)\n", k);
                    scanf("%lf", &reds);
                    if (reds > 1 || reds < 0) { printf(KRED "N o p e \n"); return 0; }
                    scanf("%lf", &blues);
                    if (blues > 1 || blues < 0) { printf(KRED "Really?\n"); return 0; }
                    scanf("%lf", &greens);
                    if (greens > 1 || greens < 0) { printf(KRED "Yeah, right...*eyeroll*\n"); return 0; }
                    scene.addObject(new Sphere(Vec3D(xc, yc, zc), rad, Colour(reds, blues, greens)));
                }

            }
        }
    }
    else if (def == 1){ //generates default image with 2 spheres
            scene.addObject(new Sphere(Vec3D(xc-3,yc+1,zc), rad-1, Colour(reds,blues,greens)));
            scene.addObject(new Sphere(Vec3D(xc+3,yc+2,zc+2), rad-2, Colour(1,0.7,0.3)));
        } else { printf("ERROR PEBCAK: User unable to follow instructions."); return 0; } //if you enter something other than 1 or 2

    printf("rendering...\n");

    Colour background(red, blue, green);
    scene.setBackground(background);

    Vec3D light(x, y, z);
    scene.addLight(light);


    scene.addObject(new Plane(Vec3D(0,-1,0), -1, Colour(1,0.5,0.5)));


    scene.renderScene();
    printf(KGRN "check your files :)\n");
}