#include <iostream>

#include "Addition.h"
#include "Multiplication.h"
#include "ArithmFactory.h"


int main()
{
    ArithmFactory factory;
    auto adder = factory.get( "Add" );
    auto multiply = factory.get( "Multiply" );

    auto left = 3;
    auto right = 4;

    std::cout << "Left: " << left << std::endl;
    std::cout << "Right: " << right << std::endl << std::endl;
    std::cout << "RESULTS: " << std::endl;
    std::cout << "Addiction: " << adder->apply( left, right ) << std::endl;
    std::cout << "Multiplication: " << multiply->apply( left, right ) << std::endl;
    return 0;
}