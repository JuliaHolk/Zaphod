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

//methods

//getters
double Vec3D::getx() {
    return x;
}

double Vec3D::gety() {
    return y;
}

double Vec3D::getz() {
    return z;
}

//length/squared
double Vec3D::lsq() {
    double ls=x*x+y*y+z*z;
    return ls;
}


//length/norm
double Vec3D::length() {
    double l=sqrt(lsq());
    return l;
}


//overload operators for vectors


//add two vectors
Vec3D Vec3D::operator+(Vec3D vec) {
    Vec3D newvec(x+vec.getx(), y+vec.gety(), z+vec.getz());
    return newvec;
}

//subtract two vectors
Vec3D Vec3D::operator-(Vec3D vec) {
    Vec3D newvec(x-vec.getx(), y-vec.gety(), z-vec.getz());
    return newvec;
}

//scalar multiplication
Vec3D Vec3D::operator*(double a) {
    Vec3D newvec(x*a, y*a, z*a);
    return newvec;
}

//dot product
double Vec3D::operator*(Vec3D vec) {
    double dotp=x*vec.getx() + y*vec.gety() + z*vec.getz();
    return dotp;
}

//normed vector
Vec3D Vec3D::normed() {
    Vec3D vec(x, y, z);
    Vec3D n=vec*(1/vec.length());
    return n;
}
