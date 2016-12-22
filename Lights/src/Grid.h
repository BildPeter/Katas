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

    bool isOn( int x, int y );
    void turnOn( int x, int y );

private:
    int sizeX_, sizeY_;
};
}


#endif //OPENFRAMEWORKS_GRID_H
