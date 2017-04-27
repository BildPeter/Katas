//
// Created by Peter A. Kolski on 27.04.17.
//
#include "shared/PrinterPrototype.h"

int main()
{
    PrinterFactory   factory;

    auto carInfo = factory.createPrinter( PrinterType::CAR );
    auto personInfo = factory.createPrinter( PrinterType::PERSON );

    carInfo->print();
    personInfo->print();
}
