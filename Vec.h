//
// Created by julia on 04.07.18.
//

#ifndef ZAPHOD_MASTER_VEC_H
#define ZAPHOD_MASTER_VEC_H


class Vector {
public:
    double x, y, z;

    //constructors

    //empty
    Vector();

    //values
    Vector(double valx, double valy, double valz);

    //methods

    /*set
    int setx(double valx);
    int sety(double valy);
    int setz(double valz);
     */

    //get
    double getx();
    double gety();
    double getz();

    //squared length
    double lsq();

    //length
    double length();

    //addition
    Vector add(Vector& vec);

    //subtraction
    Vector diff(Vector& vec);

    //multiplication with scalar
    Vector & mult(double a);

    //dot product
    double dotp(Vector &vec);

    //cross product
    Vector crossp(Vector &vec);
};



#endif //ZAPHOD_MASTER_VEC_H
