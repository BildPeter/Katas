//
//  ShapeBase.h
//  FactoryVariadic
//
//  Created by MatobaHiroshi on 4/20/17.
//  Copyright © 2017 MatobaHiroshi. All rights reserved.
//

#ifndef ShapeBase_h
#define ShapeBase_h

using namespace std;

class ShapeBase{

public:
    ShapeBase(){  cout << "Construct : " << name << endl; };
    ~ShapeBase(){ cout << "Destruct   : " << name << endl; };
    
    virtual void draw() = 0;
    float x, y;
    string name;
};

#endif /* ShapeBase_h */
