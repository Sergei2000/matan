#include "simpson.h"


simpson::simpson(double a, double b, size_t number, fncptr Function)
    :trapeze( a, b, number, Function)
{
}

double simpson::Square()
{
    double square = 0;
    for (double i = _a; i < _b; i += _step)
    {
        square += (_Function(i) + 4*_Function((2*i + _step)/2) + _Function(i + _step))/6;
    }
    if (square < 0) square = -square;
    return square * _step;
}
