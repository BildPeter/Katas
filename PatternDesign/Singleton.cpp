#include <iostream>
//#include "shared/StringSingleton.h"
#include "shared/StringSingleton2.h"


int main()
{
    std::string text = "Bla";
//    StringSingleton::Instance().setString( text );
    StringSingleton2::Instance().setText( text );

//    std::cout << StringSingleton::Instance().getString() << std::endl;
    std::cout << StringSingleton2::Instance().getText() << std::endl;
    return 0;
}