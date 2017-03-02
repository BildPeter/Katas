//
// Created by Peter A. Kolski on 27.02.17.
//

#ifndef GMOCKMEETUP_DRAWER_H
#define GMOCKMEETUP_DRAWER_H
#include "Drawer.h"
#include "Number.h"

class Drawer
{
public:
    void draw( const std::vector< Number > numbers, int scale ) const;

private:
//    void newLine() { std::cout << "\n"; }
};


#endif //GMOCKMEETUP_DRAWER_H
