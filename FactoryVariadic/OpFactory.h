//
// Created by Peter A. Kolski on 20.04.17.
//

#ifndef FACTORYVARIADIC_OPFACTORY_H
#define FACTORYVARIADIC_OPFACTORY_H

#include <memory>
#include "OperatorBase.h"
#include "OpAdd.h"
#include "OpMultiply.h"

class OpFactory
{
public:
    std::shared_ptr< OperatorBase > get( const std::string name );
};


#endif //FACTORYVARIADIC_OPFACTORY_H
