#ifndef SIMPSON_H
#define SIMPSON_H
#include "trapeze.h"

class simpson : public trapeze
{
public:
    //simpson();
    simpson(double a,double b, size_t number,fncptr Function);
    virtual double Square();
};

#endif // SIMPSON_H
