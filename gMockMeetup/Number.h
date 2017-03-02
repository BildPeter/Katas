//
// Created by Peter A. Kolski on 27.02.17.
//

#ifndef GMOCKMEETUP_NUMBER_H
#define GMOCKMEETUP_NUMBER_H


#include "SuperNumber.h"

class Number
        : public SuperNumber
{
public:
    Number() {}

   virtual bool isTop_() const override;
    virtual  bool isMiddle_() const override;
    virtual bool isBottom_() const override;
    virtual bool isLeftTop_() const override;
    virtual bool isLeftBottom_() const override;
    virtual bool isRightTop_() const override;
    virtual bool isRightBottom_() const override;

private:
    bool bottom_ = false;
    bool leftBottom_  = false;
    bool leftTop_  = false;
    bool middle_  = false;
    bool rightBottom_  = false;
    bool rightTop_  = false;
    bool top_ = false;
};


#endif //GMOCKMEETUP_NUMBER_H
