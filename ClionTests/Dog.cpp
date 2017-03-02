//
// Created by Peter A. Kolski on 17.02.17.
//

#include "Dog.h"

void Dog::jump()
{
    std::cout << "Plopp\n";
}1

void Dog:: sing()
{
    std::__1::cout << "Wooff\n";
}

std::ostream &operator<<( std::ostream &os, const Dog &dog )
{
    os << static_cast<const Animal &>(dog);
    return os;
}
