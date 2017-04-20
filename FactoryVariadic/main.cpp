#include <iostream>
#include "OpAdd.h"
#include "OpFactory.h"

#include "ShapeFactory.h"
#include "ShapeRect.h"
#include "ShapeTri.h"


int main()
{
    OpFactory   factory;

    auto adder2 =  factory.get( "Adder" );
    auto multiplier =  factory.get( "Multiplier" );

    auto first = 2.0;
    auto second = 4.0;
    
    std::cout << adder2->apply( first, second ) << std::endl;
    std::cout << multiplier->apply( first, second ) << std::endl;
    
    
    // sampel 2    
    ShapeFactory shapeFactory;
    auto tri = shapeFactory.make<ShapeTri>  ( "myCoolTriangle", 20, 20 );
    auto rect = shapeFactory.make<ShapeRect>( "myCoolRect", 20, 20, 1, 2, 3, 4);
    
    rect->draw();
    
    return 0;
}
