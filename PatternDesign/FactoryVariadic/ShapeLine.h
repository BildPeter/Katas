//
//  ShapeLine.h
//  FactoryVariadic
//
//  Created by MatobaHiroshi on 4/20/17.
//  Copyright © 2017 MatobaHiroshi. All rights reserved.
//

#ifndef ShapeLine_h
#define ShapeLine_h

#include "ShapeBase.h"

class ShapeLine : public ShapeBase{
    
public:
    ShapeLine(){
        name = "ShapeLine";
        x = 123;
        y = 345;
    }
    
    void draw(){ cout << "draw : " << name << endl;}

};

#endif /* ShapeLine_h */
