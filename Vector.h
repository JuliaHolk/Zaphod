//
// Created by julia on 04.07.18.
//

#ifndef ZAPHOD_MASTER_VECTOR_H
#define ZAPHOD_MASTER_VECTOR_H

class Vector {
    public:
        double x, y, z;

        //constructors

        //empty
        Vector();

        //values
        Vector(double valx, double valy, double valz);

        //methods

        //set
        int setx(double valx);
        int sety(double valy);
        int setz(double valz);

        //get
        double getx();
        double gety();
        double getz();

        //length
        double mag();
};

#endif //ZAPHOD_MASTER_VECTOR_H
