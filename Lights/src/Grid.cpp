//
// Created by Peter A. Kolski on 22.12.16.
//

#include "Grid.h"

kata::Grid::Grid( int sizeX, int sizeY )
{
    sizeX_ = sizeX;
    sizeY_ = sizeY;

    grid_.resize( sizeX );
    for ( auto &elemX : grid_ )
    {
        elemX.resize( sizeY );
    }
}

bool kata::Grid::getValue( int x, int y )
{
    if ( ( x < sizeX_ ) && ( y < sizeY_) )
    {
        return grid_.at(x).at(y);
    }
}
