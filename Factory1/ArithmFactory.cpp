//
// Created by Peter A. Kolski on 28.02.17.
//

#include "ArithmFactory.h"
#include "Addition.h"
#include "Multiplication.h"

std::shared_ptr< ArithmeticOP > ArithmFactory::get( string chosen ) const
{

    if ( chosen == "Add" ) { return make_shared< Addition >(); }
    if ( chosen == "Multiply" ) { return make_shared< Multiplication >(); }

    return shared_ptr< ArithmeticOP >();
}
