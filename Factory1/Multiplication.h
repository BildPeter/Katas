//
// Created by Peter A. Kolski on 28.02.17.
//

#ifndef FACTORY1_MULTIPLICATION_H
#define FACTORY1_MULTIPLICATION_H


#include "ArithmeticOP.h"

class Multiplication : public ArithmeticOP
{
public:
    double apply( double left, double right ) const override;
};


#endif //FACTORY1_MULTIPLICATION_H
