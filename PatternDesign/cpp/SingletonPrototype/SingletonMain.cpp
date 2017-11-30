#include <iostream>
<<<<<<< Updated upstream:PatternDesign/SingletonMain.cpp
//#include "shared/StringSingleton.h"
#include "shared/StringSingleton2.h"
#include "shared/StringSingleton3.h"
=======
#include "shared/StringSingleton.h"
//#include "shared/StringSingleton2.h"

>>>>>>> Stashed changes:PatternDesign/Singleton.cpp

int main()
{
    std::string text = "Bla";
<<<<<<< Updated upstream:PatternDesign/SingletonMain.cpp
//    StringSingleton::Instance().setString( text );
    StringSingleton2::Instance().setText( text );
    StringSingleton3().setText( text );

//    std::cout << StringSingleton::Instance().getString() << std::endl;
    std::cout << "2: " << StringSingleton2::Instance().getText() << std::endl;
    std::cout << "3: " << StringSingleton3().getText() << std::endl;
=======

    auto textPrt = std::make_unique< std::string >( text );
    std::cout << *textPrt << std::endl;


    StringSingleton::Instance().setString( text );
//    StringSingleton2::Instance().setText( text );

    std::cout << StringSingleton::Instance().getString() << std::endl;
//    std::cout << StringSingleton2::Instance().getText() << std::endl;

>>>>>>> Stashed changes:PatternDesign/Singleton.cpp
    return 0;
}