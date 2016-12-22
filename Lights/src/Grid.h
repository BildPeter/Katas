//
// Created by Peter A. Kolski on 22.12.16.
//

#ifndef OPENFRAMEWORKS_GRID_H
#define OPENFRAMEWORKS_GRID_H

#include <vector>

namespace kata
{
class Grid
{
public:
    Grid( int sizeX, int sizeY );

    std::vector< std::vector< bool > >      grid_;
};
}


#endif //OPENFRAMEWORKS_GRID_H
