#ifndef TRAPEZE_H
#define TRAPEZE_H
#include "rectangles.h"

class trapeze : public rectangle
{
public:
    //trapeze();
    trapeze(double a,double b, size_t number,fncptr Function);
    virtual double Square();
    double LeftRectangleSquare() = delete ;
    double MiddleRectangleSquare() = delete ;
    double RightRectangleSquare() = delete ;
    virtual ~trapeze();
};

#endif // TRAPEZE_H
