//
//  ShapeTri.h
//  FactoryVariadic
//
//  Created by MatobaHiroshi on 4/20/17.
//  Copyright © 2017 MatobaHiroshi. All rights reserved.
//

#ifndef ShapeTri_h
#define ShapeTri_h

#include "ShapeBase.h"

using namespace std;

class ShapeTri : public ShapeBase{
    
private:
    ShapeTri(){}; // do not use this

public:
    ShapeTri(string _name, float _x, float _y){
        name = _name;
        x = _x;
        y = _y;
    }
        
    void draw(){ cout << "draw : " << name << endl;}
    
};

#endif /* ShapeTri_h */
