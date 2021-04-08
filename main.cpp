#include <iostream>
#include "rectangles.h"
#include "trapeze.h"
#include "simpson.h"
#define NUM 1000000
using std::cout;
using std::endl;
double straightline(double x)
{
    return x;
}
int main()
{
    rectangle r1(0,5,NUM,&straightline);
    r1.PrintValues();
    cout << "LEFT RECT SQUARE IS : "<< r1.LeftRectangleSquare() << endl;
    cout << "MIDDLE RECT SQUARE IS : " << r1.MiddleRectangleSquare() << endl;
    cout << "RIGHT RECT SQUARE IS : " << r1.RightRectangleSquare() << endl;
    trapeze t1(0,5,NUM,&straightline);
    t1.PrintValues();
    cout << "TRAPEZE METHOD IS : " << t1.Square()<< endl;
    simpson s1(0,5,NUM,&straightline);
    s1.PrintValues();
    cout << "SIMPSON METHOD IS : " << s1.Square() << endl;
    return 0;
}
