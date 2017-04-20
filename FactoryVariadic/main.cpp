#include <iostream>
#include "OpAdd.h"
#include "OpFactory.h"


int main()
{
    OpFactory   factory;

    auto adder2 =  factory.get( "Adder" );
    auto multiplier =  factory.get( "Multiplier" );

    auto first = 2.0;
    auto second = 4.0;
    
    std::cout << adder2->apply( first, second ) << std::endl;
    std::cout << multiplier->apply( first, second ) << std::endl;
    return 0;
}