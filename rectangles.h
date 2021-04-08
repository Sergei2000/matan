#ifndef RECTANGLES_H
#define RECTANGLES_H

#include <iostream>
using std::size_t;
using std::cout;
using std::endl;
typedef double(*fncptr)(double x);
class rectangle
{
public:
  //  rectangle();
    explicit rectangle(double a,double b, size_t number,fncptr Function);
    double _a,_b;
    fncptr _Function = nullptr;
    size_t _number;
    double _step = 0;
    void PrintValues();
    double LeftRectangleSquare();
    double MiddleRectangleSquare();
    double RightRectangleSquare();
};

#endif // RECTANGLES_H
