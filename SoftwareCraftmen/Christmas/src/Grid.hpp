//
//  Grid.hpp
//  Kata_Christmas
//
//  Created by Peter A. Kolski on 19.12.16.
//
//

#ifndef Grid_hpp
#define Grid_hpp

#include <stdio.h>
#include <vector>
#include "Point.hpp"

//typedef bool State;

namespace kata {
    class Grid
    {
    public:
        Grid( int sizeX, int sizeY );
        void set( Point pnt, bool val );
        bool get( int x, int y ) { return coordVal_.at( x ).at( y ); }
        
    private:
        std::vector< std::vector< bool > >   coordVal_;
    };
}

#endif /* Grid_hpp */
