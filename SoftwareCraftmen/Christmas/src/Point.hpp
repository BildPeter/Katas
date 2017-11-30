//
//  Point.hpp
//  Kata_Christmas
//
//  Created by Peter A. Kolski on 19.12.16.
//
//

#ifndef Point_hpp
#define Point_hpp

#include <stdio.h>

namespace kata {
    class Point {
    public:
        Point( int x, int y );
        int getX() { return x_; }
        int getY() { return y_; }
        
    private:
        int x_ = 0;
        int y_ = 0;
    };
}


#endif /* Point_hpp */
