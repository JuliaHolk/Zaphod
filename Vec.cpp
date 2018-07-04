//
// Created by julia on 04.07.18.
//

#include "Vec.h"
#include <math.h>

//default values 0
Vector::Vector() {
    x=0;
    y=0;
    z=0;
}

Vector::Vector(double valx, double valy, double valz) {
    x=valx;
    y=valy;
    z=valz;
}

int Vector::setx(double valx) {
    x=valx;
    return 0;
}

int Vector::sety(double valy) {
    y=valy;
    return 0;
}

int Vector::setz(double valz) {
    z=valz;
    return 0;
}

double Vector::getx() {
    return x;
}

double Vector::gety() {
    return y;
}

double Vector::getz() {
    return z;
}

double Vector::lsq() {
    double ls=x*x+y*y+z*z;
    return ls;
}

double Vector::length() {
    double l=sqrt(lsq());
    return l;
}

Vector Vector::add(Vector &vec) {
    Vector newvec(x+vec.getx(), y+vec.gety(), z+vec.getz());
    return newvec;
}

Vector Vector::diff(Vector &vec) {
    Vector newvec(x-vec.getx(), y-vec.gety(), z-vec.getz());
    return newvec;
}

Vector Vector::mult(double a) {
    Vector newvec(a*x, a*y, a*z);
    return newvec;
}

double Vector::dotp(Vector &vec) {
    double product=x*vec.getx()+y*vec.gety()+z*vec.getz();
    return product;
}

Vector Vector::crossp(Vector &vec) {
    Vector newvec(y*vec.getz()-z*vec.gety(), z*vec.getx()-x*vec.getz(), x*vec.gety()-y*vec.getx());
    return newvec;
}