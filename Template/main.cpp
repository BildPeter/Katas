#include "ofMain.h"


class ofApp : public ofBaseApp{
public:
	void setup()
	{}

	void update()
	{}

	void draw()
	{}
};


//========================================================================
int main( ){
	ofSetupOpenGL(1024,768, OF_WINDOW);
	ofRunApp( new ofApp());
}
