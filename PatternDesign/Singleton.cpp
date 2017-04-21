#include <iostream>
#include "shared/StringSingleton.h"

int main()
{
    std::string text = "Bla";
    StringSingleton::Instance().setString( text );

    std::cout << StringSingleton::Instance().getString() << std::endl;
    return 0;
}