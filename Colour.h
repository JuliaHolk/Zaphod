//
// Created by m1722682 on 7/2/18.
//

#ifndef ZAPHOD_COLOUR_H
#define ZAPHOD_COLOUR_H

class Colour {
    private:
        double r, b, g;

    public:
        double getr(){
            return r;
        }
        double getb(){
            return b;
        }
        double getg(){
            return g;
        }

        //Constructors
        //empty
        Colour(): Colour(0,0,0){};
        //values
        Colour(double red, double blue, double green);




};

#endif //ZAPHOD_COLOUR_H
