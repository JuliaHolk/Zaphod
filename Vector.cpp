//
// Created by julia on 04.07.18.
//

#include "Vector.h"
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

double Vector::mag() {
    return 0;
}



