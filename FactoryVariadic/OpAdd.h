//
// Created by Peter A. Kolski on 20.04.17.
//

#ifndef FACTORYVARIADIC_OPADD_H
#define FACTORYVARIADIC_OPADD_H

#include "OperatorBase.h"

class OpAdd : public OperatorBase
{
public:
    double apply( double first, double second ) override;
};


#endif //FACTORYVARIADIC_OPADD_H
