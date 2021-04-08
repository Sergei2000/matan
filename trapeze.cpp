#include "trapeze.h"



trapeze::trapeze(double a, double b, size_t number, fncptr Function):rectangle (a,b,number,Function)
{
}

double trapeze::Square()
{
    double square = 0;
    for (double i = _a ; i < _b; i += _step )
    {
        square += ((_Function(i) + _Function(i + _step))/2);
    }
    if (square < 0) square = -square;
    return  square * _step ;
}

trapeze::~trapeze()
{

}
