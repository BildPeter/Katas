//
// Created by Peter A. Kolski on 27.02.17.
//

#include <iostream>
#include <vector>
#include "Drawer.h"

using namespace std;

void Drawer::draw( const vector< Number > numbers, int scale ) const
{

    std::string top = "";

    for ( auto num : numbers ) // TODO std::algorithm
    {
        if ( num.isTop_() ) {
            top += " -- ";
        }
        else
        {
            top += "    ";
        }
    }
    cout << top << "\n";
}
