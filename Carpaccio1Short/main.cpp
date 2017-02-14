#include "ofMain.h"





class ofApp : public ofBaseApp{
public:
	int amountProduct = 0;
	double priceFinal = 0.0;
	double taxPercentageCurrent = 15;


	void setup()
	{}

	void update()
	{}

	void draw()
	{
		ofDrawBitmapStringHighlight( "Amount: " + ofToString( amountProduct ), 10, 10 );
		ofDrawBitmapStringHighlight( "Tax: " + ofToString( taxPercentageCurrent ) + "%", 10, 30 );
		ofDrawBitmapStringHighlight( "Price Final: " + ofToString( priceFinal ), 10, 300, ofColor::red );
	}
};


//========================================================================
int main( ){
	ofSetupOpenGL(1024,768, OF_WINDOW);
	ofRunApp( new ofApp());
}
