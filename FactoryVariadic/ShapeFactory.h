//
//  ShapeFactory.h
//  FactoryVariadic
//
//  Created by MatobaHiroshi on 4/20/17.
//  Copyright © 2017 MatobaHiroshi. All rights reserved.
//

#ifndef ShapeFactory_h
#define ShapeFactory_h

using namespace std;

class ShapeFactory{
    
public:

    template<typename ShapeT>
    shared_ptr<ShapeT> make( ShapeT * shape ){
        shared_ptr<ShapeT> result( shape );
        return result;
    };

    template<typename ShapeT, typename... Args>
    shared_ptr<ShapeT> make( Args&&... args ){
        shared_ptr<ShapeT> shape( new ShapeT(std::forward<Args>(args)... ) );
        return shape;
    };
    
};

#endif /* ShapeFactory_h */
