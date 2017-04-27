#include <iostream>
//#include "shared/StringSingleton.h"
#include "shared/StringSingleton2.h"
#include "shared/StringSingleton3.h"

int main()
{
    std::string text = "Bla";
//    StringSingleton::Instance().setString( text );
    StringSingleton2::Instance().setText( text );
    StringSingleton3().setText( text );

//    std::cout << StringSingleton::Instance().getString() << std::endl;
    std::cout << "2: " << StringSingleton2::Instance().getText() << std::endl;
    std::cout << "3: " << StringSingleton3().getText() << std::endl;
    return 0;
}