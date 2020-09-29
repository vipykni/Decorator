#ifndef WHISKEY_H
#define WHISKEY_H

#include "beverage.h"
#include "condimentdecorator.h"


class whiskey : public CondimentDecorator
{
public:
    whiskey(Beverage*);
    virtual double cost();
    virtual QString getDescription();
};

#endif // WHISKEY_H



