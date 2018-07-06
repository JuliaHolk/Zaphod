//
// Created by julia on 05.07.18.
//

#include "Vec.h"
#include "Ray.h"
#include "Sphere.h"

bool intersect(Sphere sphere, Ray ray){
    double t;
    double rad2;
    //ray is defined by r=st+t*dir.
    //sphere is defined by set of points (Vectors) v_s with (v_s-centre)²=radius²
    //put ray equation into sphere equation for v_s:
    //(st+t*dir-centre)²=radius², or A*t²+B*t+C=0 with
    //A=dir², B=2*(dir*(st-centre)), C=(st-centre)³-radius²
    Vector st=ray.getst();
    Vector dir=ray.getdir();
    Vector cent=sphere.getcent();
    Vector rad=st.add(dir.mult(t)).diff(cent); //st+t*dir-centre
    rad2=rad.lsq();                            //(st+t*dir-centre)²
    float A=dir.lsq();

}
