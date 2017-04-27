//
// Created by Peter A. Kolski on 27.04.17.
//

#ifndef PATTERNDESIGN_RECORDPROTOTYPE_H
#define PATTERNDESIGN_RECORDPROTOTYPE_H

#include <memory>
#include <iostream>
#include <unordered_map>

class Record
{
public:
    virtual ~Record() {}
    virtual void print() = 0;
    virtual std::unique_ptr<Record> clone() = 0;
};


class CarRecord : public Record
{
public:
    CarRecord( const std::string &carName_, int carID_ ) : carName_( carName_ ), carID_( carID_ )
    {
    }

    void print() override
    {
        std::cout << "Car\n" << carID_ << " : " << carName_ << std::endl;
    }

    std::unique_ptr< Record > clone() override
    {
        return std::make_unique< CarRecord >(*this);
    }


private:
    std::string carName_;
    int         carID_;

};


class PersonRecord : public Record
{
public:
    PersonRecord( const std::string &personName_, int personID_ ) : personName_( personName_ ),
                                                                    personID_( personID_ )
    {}

    void print() override
    {
        std::cout << "Person\n" << personID_ << " : " << personName_ << std::endl;
    }

    std::unique_ptr< Record > clone() override
    {
        return std::make_unique< PersonRecord >(*this);
    }

private:
    std::string personName_;
    int         personID_;
};

enum RecordType
{
    CAR,
    PERSON
};

class RecordFactory
{
public:
    RecordFactory()
    {
        records_[ RecordType::CAR ] = std::make_unique< CarRecord >( "VW", 77);
        records_[ RecordType::PERSON ] = std::make_unique< PersonRecord >( "Karl", 0 );
    }

    std::unique_ptr< Record >   createRecord( RecordType type )
    {
        return records_.at( type )->clone();
    }

private:
    std::unordered_map< RecordType, std::unique_ptr< Record >, std::hash< int > >    records_;
};


#endif //PATTERNDESIGN_RECORDPROTOTYPE_H
