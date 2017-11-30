//
//  ShapeFactory.h
//  FactoryVariadic
//
//  Created by MatobaHiroshi on 4/20/17.
//  Copyright © 2017 MatobaHiroshi. All rights reserved.
//

#ifndef ShapeFactory_h
#define ShapeFactory_h

#include "ShapeBase.h"

using namespace std;

class ShapeFactory{
    
public:

//    template<typename ShapeT>
//    shared_ptr<ShapeT> make(){
//        shared_ptr<ShapeT> shape( make_shared<ShapeT>());
//        return shape;
//    };

    template<typename ShapeT, typename... Args>
    shared_ptr<ShapeT> make( Args&&... args ){
        static_assert( std::is_base_of<ShapeBase, ShapeT>::value, "ShapeT must inherit from ShapeBase" );

        shared_ptr<ShapeT> shape( make_shared<ShapeT>(std::forward<Args>(args)... ) );
        return shape;
    };
    
};

#endif /* ShapeFactory_h */
