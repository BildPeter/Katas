//
// Created by Peter A. Kolski on 28.02.17.
//

#ifndef FACTORY1_ADDITION_H
#define FACTORY1_ADDITION_H

#include "ArithmeticOP.h"

class Addition : public ArithmeticOP
{
public:
    double apply( double left, double right ) const override;
};


#endif //FACTORY1_ADDITION_H
