//
// Created by Peter A. Kolski on 28.02.17.
//

#ifndef FACTORY1_ARITHMFACTORY_H
#define FACTORY1_ARITHMFACTORY_H

#include <memory>
#include <string>
#include "ArithmeticOP.h"

using namespace std;

class ArithmFactory
{
public:
    std::shared_ptr< ArithmeticOP > get( string chosen ) const;

};


#endif //FACTORY1_ARITHMFACTORY_H
