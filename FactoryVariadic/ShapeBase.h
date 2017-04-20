//
//  ShapeBase.h
//  FactoryVariadic
//
//  Created by MatobaHiroshi on 4/20/17.
//  Copyright © 2017 MatobaHiroshi. All rights reserved.
//

#ifndef ShapeBase_h
#define ShapeBase_h

class ShapeBase{

public:
    ShapeBase(){  cout << "Construct : " << name << endl; };
    ~ShapeBase(){ cout << "Desruct   : " << name << endl; };
    
    enum ShapeType{
        SHAPE_NON = 0,
        SHAPE_TRI,
        SHAPE_RECT
    };
    
    virtual void draw() = 0;
    float x, y;
    ShapeType type;
    string name;
};

#endif /* ShapeBase_h */
