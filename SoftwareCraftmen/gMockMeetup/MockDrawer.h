//
// Created by Peter A. Kolski on 27.02.17.
//

#ifndef GMOCKMEETUP_MOCKDRAWER_H
#define GMOCKMEETUP_MOCKDRAWER_H

#include "Drawer.h"
#include <gmock/gmock.h>

class MockDrawer : public Drawer
{
public:
    MOCK_METHOD2( draw, void(std::vector<Number> numbers, int scale ) );
};


#endif //GMOCKMEETUP_MOCKDRAWER_H
