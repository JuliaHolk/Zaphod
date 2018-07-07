//
// Created by julia on 04.07.18.
//

#include "Vec.h"
#include <cmath>

//default values 0
Vec3D::Vec3D() {
    x=0;
    y=0;
    z=0;
}

Vec3D::Vec3D(double valx, double valy, double valz) {
    x=valx;
    y=valy;
    z=valz;
}

/* don't need setter
    int Vec3D::setx(double valx) {
    x=valx;
    return 0;
}

int Vec3D::sety(double valy) {
    y=valy;
    return 0;
}

int Vec3D::setz(double valz) {
    z=valz;
    return 0;
}
*/

//methods
double Vec3D::getx() {
    return x;
}

double Vec3D::gety() {
    return y;
}

double Vec3D::getz() {
    return z;
}

double Vec3D::lsq() {
    double ls=x*x+y*y+z*z;
    return ls;
}

double Vec3D::length() {
    double l=sqrt(lsq());
    return l;
}

/*
    Vec3D Vec3D::add(Vec3D &vec) {
    Vec3D newvec(x+vec.getx(), y+vec.gety(), z+vec.getz());
    return newvec;
}

Vec3D Vec3D::diff(Vec3D &vec) {
    Vec3D newvec(x-vec.getx(), y-vec.gety(), z-vec.getz());
    return newvec;
}

Vec3D Vec3D::mult(double a) {
    Vec3D newvec(a*x, a*y, a*z);
    return newvec;
}

double Vec3D::dotp(Vec3D &vec) {
    double product=x*vec.getx()+y*vec.gety()+z*vec.getz();
    return product;
}
*/

//don't need crossproduct?
Vec3D Vec3D::crossp(Vec3D &vec) {
    Vec3D newvec(y*vec.getz()-z*vec.gety(), z*vec.getx()-x*vec.getz(), x*vec.gety()-y*vec.getx());
    return newvec;
}

Vec3D Vec3D::operator+(Vec3D vec) {
    Vec3D newvec(x+vec.getx(), y+vec.gety(), z+vec.getz());
    return newvec;
}

Vec3D Vec3D::operator-(Vec3D vec) {
    Vec3D newvec(x-vec.getx(), y-vec.gety(), z-vec.getz());
    return newvec;
}

Vec3D Vec3D::operator*(double a) {
    Vec3D newvec(x*a, y*a, z*a);
    return newvec;
}

double Vec3D::operator*(Vec3D vec) {
    double dotp=x*vec.getx() + y*vec.gety() + z*vec.getz();
    return dotp;
}
