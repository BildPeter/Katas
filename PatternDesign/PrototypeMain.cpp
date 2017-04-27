//
// Created by Peter A. Kolski on 27.04.17.
//
#include "shared/RecordPrototype.h"

int main()
{

    RecordFactory   factory;

    auto car = factory.createRecord( RecordType::CAR );
    auto person = factory.createRecord( RecordType::PERSON );

    car->print();
    person->print();
}
