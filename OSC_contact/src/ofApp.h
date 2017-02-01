#pragma once

#include "ofMain.h"
#include "ofxOSC.h"

class ofApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();
		void gotMessage(ofMessage msg);
};
