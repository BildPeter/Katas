//
// Created by Peter A. Kolski on 20.04.17.
//

#include <string>
#include "OpFactory.h"

std::shared_ptr< OperatorBase > OpFactory::get( const std::string name )
{
    if( name == "Adder" )
    {
        return std::make_shared< OpAdd >();
    }
    if ( name  =="Multiplier" )
    {
        return std::make_shared< OpMultiply >();
    }
}
