//
// Created by julia on 04.07.18.
//

#ifndef ZAPHOD_MASTER_VEC_H
#define ZAPHOD_MASTER_VEC_H


class Vec3D {
public:
    double x, y, z;

    //constructors

    //empty
    Vec3D();

    //values
    Vec3D(double valx, double valy, double valz);

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
    //Vec3D add(Vec3D& vec);

    Vec3D operator+(Vec3D vec);

    //subtraction
    //Vec3D diff(Vec3D& vec);

    Vec3D operator-(Vec3D vec);

    //multiplication with scalar
    //Vec3D & mult(double a);

    Vec3D operator*(double a);

    //dot product
    //double dotp(Vec3D &vec);

    double operator*(Vec3D vec);

    //normed vec

    Vec3D normed();
};



#endif //ZAPHOD_MASTER_VEC_H
