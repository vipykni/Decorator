#include "whiskey.h"

whiskey::whiskey( Beverage *b) : CondimentDecorator (b)
{

}

double whiskey::cost() {
    return 54.0 + beverage->cost();
}

QString whiskey::getDescription() {
    return beverage->getDescription() + ", Whiskey";
}






