//
// Created by Peter A. Kolski on 20.04.17.
//

#ifndef FACTORYVARIADIC_OPERATORBASE_H
#define FACTORYVARIADIC_OPERATORBASE_H


class OperatorBase
{
public:
    virtual double apply( double first, double second ) = 0;
};


#endif //FACTORYVARIADIC_OPERATORBASE_H
