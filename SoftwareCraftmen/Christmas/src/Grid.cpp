//
//  Grid.cpp
//  Kata_Christmas
//
//  Created by Peter A. Kolski on 19.12.16.
//
//

#include "Grid.hpp"

namespace kata {
    Grid::Grid( int sizeX, int sizeY )
    {
        coordVal_.resize( sizeX );
        
        for( auto & elementX : coordVal_ )
        {
            elementX.resize( sizeY, 0 );
        }
    }
    
    void Grid::set( Point pnt, bool val )
    {
        coordVal_.at( pnt.getX() ).at( pnt.getY() ) = val ;
    }
}