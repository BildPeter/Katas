//
// Created by Peter A. Kolski on 27.02.17.
//

#ifndef GMOCKMEETUP_SUPERNUMBER_H
#define GMOCKMEETUP_SUPERNUMBER_H


class SuperNumber
{
public:
    virtual bool isTop_() const = 0;
    virtual bool isMiddle_() const = 0;
    virtual bool isBottom_() const = 0;
    virtual bool isLeftTop_() const = 0;
    virtual bool isLeftBottom_() const = 0;
    virtual bool isRightTop_() const = 0;
    virtual bool isRightBottom_() const = 0;
};


#endif //GMOCKMEETUP_SUPERNUMBER_H
