//
// Created by Peter A. Kolski on 21.04.17.
//

#include "StringSingleton.h"

std::string StringSingleton::getString() const
{
    return mString;
}

void StringSingleton::setString( const std::string &mString )
{
    StringSingleton::mString = mString;
}
