//
//  LightSwitch.hpp
//  Kata_Christmas
//
//  Created by Peter A. Kolski on 19.12.16.
//
//

#ifndef LightSwitch_hpp
#define LightSwitch_hpp

#include <stdio.h>
#include "Point.hpp"
#include "Grid.hpp"

namespace kata {
    class LightSwitch
    {
    public:
        LightSwitch( int sizeX, int sizeY );
        
    private:
        Grid    grid_;
    };
}


#endif /* LightSwitch_hpp */
