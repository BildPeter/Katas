//
// Created by Peter A. Kolski on 27.04.17.
//

#ifndef PATTERNDESIGN_RECORDPROTOTYPE_H
#define PATTERNDESIGN_RECORDPROTOTYPE_H

#include <memory>
#include <iostream>
#include <unordered_map>

class PrinterBase
{
public:
    virtual ~PrinterBase() {}
    virtual void print() = 0;
    virtual std::unique_ptr<PrinterBase> clone() = 0;
};


class CarInfoPrinter : public PrinterBase
{
public:
    CarInfoPrinter( const std::string &carName_, int carID_ ) : carName_( carName_ ), carID_( carID_ )
    {
    }

    void print() override
    {
        std::cout << "Car: " << carID_ << " | " << carName_ << std::endl;
    }

    std::unique_ptr< PrinterBase > clone() override
    {
        return std::make_unique< CarInfoPrinter >(*this);
    }


private:
    std::string carName_;
    int         carID_;

};


class PersonInfoPrinter : public PrinterBase
{
public:
    PersonInfoPrinter( const std::string &personName_, int personID_ ) : personName_( personName_ ),
                                                                    personID_( personID_ )
    {}

    void print() override
    {
        std::cout << "Person: " << personID_ << " | " << personName_ << std::endl;
    }

    std::unique_ptr< PrinterBase > clone() override
    {
        return std::make_unique< PersonInfoPrinter >(*this);
    }

private:
    std::string personName_;
    int         personID_;
};

enum PrinterType
{
    CAR,
    PERSON
};

class PrinterFactory
{
public:
    PrinterFactory()
    {
        printers_[ PrinterType::CAR ] = std::make_unique< CarInfoPrinter >( "VW", 77);
        printers_[ PrinterType::PERSON ] = std::make_unique< PersonInfoPrinter >( "Karl", 0 );
    }

    std::unique_ptr< PrinterBase >   createPrinter( PrinterType type )
    {
        return printers_.at( type )->clone();
    }

private:
    std::unordered_map< PrinterType, std::unique_ptr< PrinterBase >, std::hash< int > >    printers_;
};


#endif //PATTERNDESIGN_RECORDPROTOTYPE_H
