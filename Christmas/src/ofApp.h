#pragma once

#include "ofMain.h"
#include "Point.hpp"
#include "Grid.hpp"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

    int worldX = 1000;
    int worldY = 1000;
    
    kata::Point     pnt{100, 100};
    kata::Grid      pntGrid{ worldX, worldY };
};
