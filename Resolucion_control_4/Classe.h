#ifndef WCCCLION_CLASSE_H
#define WCCCLION_CLASSE_H
#include <iostream>

class Polygon{
protected:
    int width,height;
public:
    Polygon(int a,int b): width(a),height(b) {};
    virtual int area() =0;
    void printarea(){std::cout<<this->area()<<"\n";}

};

#endif //WCCCLION_CLASSE_H