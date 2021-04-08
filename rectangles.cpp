#include "rectangles.h"

rectangle::rectangle(double a, double b, size_t number,fncptr Function): _a(a),_b(b),
    _Function(Function),_number(number)
{
    _step = (_b - _a)/_number;
    if (_step < 0) _step = -_step;
    cout << "constructor "<< endl;
}

void rectangle::PrintValues()
{
    cout << "a:" << _a << endl;
    cout << "b:" << _b<< endl;
    cout << "number:" << _number << endl;
    cout << "step:" << _step << endl;
}

double rectangle::LeftRectangleSquare()
{
    double square = 0;
    for (double i = _a ;i <= _b; i += _step)
    {
        square += _Function(i);
    }
    if (square < 0) square = -square;
    return square * _step;
}

double rectangle::MiddleRectangleSquare()
{
    double square = 0;
    for (double i = _a; i < _b; i += _step)
    {
        square += _Function((2*i + _step) / 2);
    }
    if (square < 0) square = -square;
    return square * _step;
}

double rectangle::RightRectangleSquare()
{
    double square = 0;
    for (double i = _a - _step; i < _b; i += _step)
    {
        square += _Function((i + _step));
    }
    if (square < 0) square = -square;
    return square * _step;
}
