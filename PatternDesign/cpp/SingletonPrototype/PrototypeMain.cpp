//
// Created by Peter A. Kolski on 27.04.17.
//
#include "shared/PrinterPrototype.h"
#include "shared/PrinterPrototype2.h"

int main()
{
    PrinterFactory   factory;
    auto infoPrinter = factory.createPrinter( PrinterType::CAR );

    infoPrinter->print();
    infoPrinter = factory.createPrinter( PrinterType::PERSON );
    infoPrinter->print();
}
