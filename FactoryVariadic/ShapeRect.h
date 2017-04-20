//
//  ShapeRect.h
//  FactoryVariadic
//
//  Created by MatobaHiroshi on 4/20/17.
//  Copyright © 2017 MatobaHiroshi. All rights reserved.
//

#ifndef ShapeRect_h
#define ShapeRect_h

#include "ShapeBase.h"

using namespace std;

class ShapeRect : public ShapeBase{

private:
    ShapeRect(){}; // do not use this
    
public:
    
    ShapeRect(string _name, float _x, float _y, float _p1, float _p2, float _p3, float _p4)
    {
        name = _name;
        x = _x;
        y = _y;
        p1 = _p1; p2 = _p2; p3 = _p3; p4 = _p4;
        type = ShapeType::SHAPE_RECT;
    }
    
    void draw(){ cout << "draw : " << name << endl;}

    
    float p1, p2, p3, p4;
    
};

#endif /* ShapeRect_h */
