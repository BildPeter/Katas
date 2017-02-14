#include "ofMain.h"
#include "ofxGui.h"
#include <unordered_map>



class ofApp : public ofBaseApp{
public:
    ofxIntSlider amountProduct;
    ofxPanel gui;

//	int amountProduct = 0;
	double priceSingle = 0;
	double priceFinal = 0.0;
	double taxPercentageCurrent = 15;
	string country = "";

	std::unordered_map< string, double > CountryToTaxPercentage =
			{
				{ "DE", 15.0 }
			};


	double getTaxFactor( string countryCode ) { return ( CountryToTaxPercentage.at( countryCode ) / 100 + 1 ); }
	double getFinalPrice( string countryCode ) { return priceSingle * amountProduct * getTaxFactor( countryCode ); }

	void setup()
	{
        gui.setup( "Shop", "guiSettings.xml", 200, 50 );
		gui.add( amountProduct.setup( "Amount", 1, 0, 100000 ) );
//		amountProduct = 1;
		priceSingle = 10.0;
		country = "DE";
	}

	void update()
	{
	}

	void draw()
	{
//		ofDrawBitmapStringHighlight( "Amount: " + ofToString( amountProduct ), 10, 10 );
		ofDrawBitmapStringHighlight( "Tax: " + ofToString( taxPercentageCurrent ) + "%", 10, 30 );
		ofDrawBitmapStringHighlight( "Price single: " + ofToString( priceSingle ) + "EURO", 10, 50 );
		ofDrawBitmapStringHighlight( "Price Final: " + ofToString( getFinalPrice( country ) ), 10, 300, ofColor::red );

		gui.draw();
	}
};


//========================================================================
int main( ){
	ofSetupOpenGL(1024,768, OF_WINDOW);
	ofRunApp( new ofApp());
}
