//
// Created by Peter A. Kolski on 20.04.17.
//

#ifndef FACTORYVARIADIC_OPMULTIPLY_H
#define FACTORYVARIADIC_OPMULTIPLY_H


#include "OperatorBase.h"

class OpMultiply : public OperatorBase
{
public:
    double apply( double first, double second ) override;
};


#endif //FACTORYVARIADIC_OPMULTIPLY_H
