//
// Created by julia on 04.07.18.
//

#include "Sphere.h"
#include "Vec.h"
#include "Colour.h"

Sphere::Sphere(Vector cent, double rad, Colour col) {
    cent=centre;
    rad=radius;
    col=colour;
}

//Darf ich das so machen???
Vector Sphere::intersect(Ray ray) {
    //ray is defined by r=st+t*dir.
    //sphere is defined by set of points (Vectors) v_s with (v_s-centre)²=radius²
    //put ray equation into sphere equation for v_s:
    //(st+t*dir-centre)²=radius², or A*t²+B*t+C=0 with
    //A=dir², B=2*(dir*(st-centre)), C=(st-centre)³-radius²
    Vector st = ray.getst();
    Vector dir = ray.getdir();
    double A = dir.lsq();
    double B = dir * (st - dir) * 2;
    double C = (st - centre).lsq() - radius * radius;
    double d = B * B - 4 * C;               //discriminant
    double t0=(-B - sqrt(d)) / (2 * A);     //solution of quadratic equation
    double t1=(-B + sqrt(d)) / (2 * A);     //2nd solution if discriminant > 0
    Vector hitpoint=st + dir * t0;          //intersection point for t0

    if (d < 0.0) {
        double tinf=INFINITY;
        Vector nohit=st + dir * tinf;    //if discriminant < 0, equation has no real solution --> no intersection
        return nohit;                    //then ray continues infinitely in it's direction --> set t=INF
    }
    else {
        if (t0>=0.0) {                      //smaller positive root is closest intersection point (and t0<t1)
            return hitpoint;                //closest intersection point if t0 is positive
        }
        else {
            Vector hitpoint1=st + dir * t1; //closest intersection point if t0 is negative
            return hitpoint1;
        }
    }
}
//oder ist das bullshit?




//von vorher:

//das ist echt haesslich :'(
/*bool Sphere::intersect(Ray ray, double d) {
    double t;

    d = B * B - 4 * C;

    if (d < 0.0) {
        return false;
    } else {
        return true;
    }
}*/

/*Vector Sphere::hitpoint(Ray ray, Sphere sphere) {
    double t;
    Vector st = ray.getst();
    Vector dir = ray.getdir();
    double A = dir.lsq();
    double B = dir * (st - dir) * 2;
    double C = (st - centre).lsq() - radius * radius;
    double d = B * B - 4 * C;
    double t0 = (-B - sqrt(d)) / (2 * A);
    if (d=0.0){

            Vector hitp=st + dir*t0;
            return hitp;
    }
        else {
            if(t0>0.0) {
                Vector hitp=st + dir*t0;
                return hitp;
            }
            else {
                double t1=(-B + sqrt(d)) / (2 * A);
                Vector hitp=st + dir*t1;
                return hitp;
            }

        }
}*/
//t0 = (-B - sqrt(d)) / (2 * A);
//        t1 = (-B + sqrt(d)) / (2 * A);