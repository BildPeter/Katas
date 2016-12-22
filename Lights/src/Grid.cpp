//
// Created by Peter A. Kolski on 22.12.16.
//

#include "Grid.h"

kata::Grid::Grid( int sizeX, int sizeY )
{
    grid_.resize( sizeX );
    for ( auto &elemX : grid_ )
    {
        elemX.resize( sizeY );
    }
}
