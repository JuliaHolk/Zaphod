//
// Created by julia on 04.07.18.
//

#include "Sphere.h"
#include "Vec.h"
#include "Colour.h"

Sphere::Sphere(Vec3D cent, double rad, Colour col) {
    position=cent;
    radius=rad;
    colour=col;
}


double Sphere::intersect(Ray ray) {
    //ray is defined by r=st+t*dir.
    //sphere is defined by set of points (Vectors) v_s with (v_s-position)²=radius²
    //put ray equation into sphere equation for v_s:
    //(st+t*dir-position)²=radius², or A*t²+B*t+C=0 with
    //A=dir², B=2*(dir*(st-position)), C=(st-position)³-radius²
    Vec3D st = ray.getst();
    Vec3D dir = ray.getdir();
    double A = dir.lsq();
    double B = (dir * (st - position)) * 2;
    double C = (st - position).lsq() - radius * radius;
    double d = B * B - 4 * A * C;           //discriminant
    double t0=(-B - sqrt(d)) / (2 * A);     //solution of quadratic equation
    double t1=(-B + sqrt(d)) / (2 * A);     //2nd solution if discriminant > 0

    if (d < 0.0) {
        double tinf=INFINITY;               //if discriminant < 0, equation has no real solution --> no intersection
        return tinf;                        //then ray continues infinitely in it's direction --> set t=INF
    }
    else {
        if (t0>=0.0) { return t0; }         //smaller positive root is closest intersection point (and t0<t1)closest intersection point if t0 is positive
        else { return t1; }                 //closest intersection point if t0 is negative

    }
}

double Sphere::diffuse(Vec3D lightsource, Ray ray) {
    Vec3D intersect_Vec=ray.getst() + ray.getdir()*intersect(ray);      //intersection point
    Vec3D shadowvec=intersect_Vec - lightsource;      //Vector between intersection point and lightsource
    Vec3D norm_Shadowvec=shadowvec * (1/shadowvec.length());
    Vec3D surface_norm=(intersect_Vec - position) * (1/(intersect_Vec - position).length());  //normalized surface normal
    double diffuse=norm_Shadowvec * surface_norm * -1;
    return diffuse;
}

/*double Sphere::shadow(Vec3D lightsource, Ray ray, Sphere s) {
    Vec3D intersect_Vec=ray.getst() + ray.getdir() * intersect(ray);      //intersection point
    Vec3D shadowvec=lightsource - intersect_Vec;
    Ray shadowray(intersect_Vec, shadowvec);
    double hit=s.intersect(shadowray);

    if (hit<INFINITY && hit > 1e-10){
        return 0;
    }
    else {
        return 1;
    }

}*/











