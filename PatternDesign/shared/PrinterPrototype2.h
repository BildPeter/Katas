//
// Created by Peter A. Kolski on 28.04.17.
//

#ifndef PATTERNDESIGN_PRINTERPROTOTYPE2_H
#define PATTERNDESIGN_PRINTERPROTOTYPE2_H

namespace proto
{

class PrinterPrototypeBase2
{
public:
    virtual ~PrinterPrototypeBase2();
    virtual void print() = 0;
    virtual std::unique_prt< PrinterPrototypeBase2 > clone() = 0;

};

class CarInfoPrinter : public PrinterBase2
{


private:
    int     id_;
    std::string name_;
};


} //namespace proto


#endif //PATTERNDESIGN_PRINTERPROTOTYPE2_H
