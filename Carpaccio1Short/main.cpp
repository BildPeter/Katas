#include "ofMain.h"





class ofApp : public ofBaseApp{
public:
	int amountProduct = 0;
	double priceSingle = 0;
	double priceFinal = 0.0;
	double taxPercentageCurrent = 15;


	void setup()
	{
		amountProduct = 1;
		priceSingle = 10.0;

		priceFinal = priceSingle * amountProduct * ( taxPercentageCurrent / 100 + 1 );
	}

	void update()
	{}

	void draw()
	{
		ofDrawBitmapStringHighlight( "Amount: " + ofToString( amountProduct ), 10, 10 );
		ofDrawBitmapStringHighlight( "Tax: " + ofToString( taxPercentageCurrent ) + "%", 10, 30 );
		ofDrawBitmapStringHighlight( "Price single: " + ofToString( priceSingle ) + "EURO", 10, 50 );
		ofDrawBitmapStringHighlight( "Price Final: " + ofToString( priceFinal ), 10, 300, ofColor::red );
	}
};


//========================================================================
int main( ){
	ofSetupOpenGL(1024,768, OF_WINDOW);
	ofRunApp( new ofApp());
}
