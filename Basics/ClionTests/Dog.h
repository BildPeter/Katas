//
// Created by Peter A. Kolski on 17.02.17.
//

#ifndef CLIONTESTS_DOG_H
#define CLIONTESTS_DOG_H

#include "Animal.h"
#include <iostream>

class Dog : public Animal
{
public:
    void jump() override;

    void sing();
    void bark()
    {

    }

    friend std::ostream &operator<<( std::ostream &os, const Dog &dog );

};


#endif //CLIONTESTS_DOG_H
