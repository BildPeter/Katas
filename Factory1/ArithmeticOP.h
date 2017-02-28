//
// Created by Peter A. Kolski on 28.02.17.
//

#ifndef FACTORY1_ARITHMETICOP_H
#define FACTORY1_ARITHMETICOP_H


class ArithmeticOP
{
public:
    virtual double apply( double left, double right ) const = 0;
};


#endif //FACTORY1_ARITHMETICOP_H
