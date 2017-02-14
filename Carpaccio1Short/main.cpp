#include "ofMain.h"





class ofApp : public ofBaseApp{
public:
	int amountProduct = 0;


	void setup()
	{}

	void update()
	{}

	void draw()
	{
		ofDrawBitmapStringHighlight( "Amount: " + ofToString( amountProduct ), 10, 10 );
	}
};


//========================================================================
int main( ){
	ofSetupOpenGL(1024,768, OF_WINDOW);
	ofRunApp( new ofApp());
}
