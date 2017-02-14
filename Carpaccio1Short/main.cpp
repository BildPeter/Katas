#include "ofMain.h"
#include "ofxGui.h"
#include <unordered_map>



class ofApp : public ofBaseApp{
public:
    ofxIntSlider amountProduct;
    ofxPanel gui;

	double priceSingle = 0;
	string country = "";

	std::unordered_map< string, double > CountryToTaxPercentage =
			{
				{ "DE", 15.0 },
				{ "GR", 6.85 },
				{ "GB", 8.99 },
				{ "FI", 18.00 }
			};

	std::unordered_map< int, double > amonutToDiscount =
			{
					{1000, 3.0 },
					{5000, 5.0 },
					{7000, 7.0 },
					{10000, 10.0 },
					{50000, 15.0 }
			};

	double getTaxFactor( string countryCode ) { return ( CountryToTaxPercentage.at( countryCode ) / 100 + 1 ); }
	double getFinalPrice( string countryCode ) { return priceSingle * amountProduct * getTaxFactor( countryCode ); }

	void setup()
	{
        gui.setup( "Shop", "guiSettings.xml", 200, 50 );
		gui.add( amountProduct.setup( "Amount", 1, 0, 100000 ) );
		priceSingle = 10.0;
		country = "GB";
	}

	void update()
	{
	}

	void draw()
	{
		ofDrawBitmapStringHighlight( "Tax: " + ofToString( CountryToTaxPercentage.at( country ) ) + "%", 10, 30 );
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
