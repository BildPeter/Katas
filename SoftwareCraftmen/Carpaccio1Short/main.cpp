#include "ofMain.h"
#include "ofxGui.h"


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

	double getTaxFactor( string countryCode ) { return ( CountryToTaxPercentage.at( countryCode ) / 100 + 1 ); }
	double getReductionPercentage( int amount )
	{
		double percentage = 0.0;
		if ( amount >= 50000 ) percentage = 15.0;
		else if ( amount >= 10000 ) percentage = 10.0;
		else if ( amount >= 7000 ) percentage = 7.0;
		else if ( amount >= 5000 ) percentage = 5.0;
		else if ( amount >= 1000 ) percentage = 3.0;

		return percentage;
	}
	double getFinalPrice( string countryCode )
	{
		double priceBeforeReduction = priceSingle * amountProduct * getTaxFactor( countryCode );
		double reductionFactor = 1.0 - getReductionPercentage( amountProduct ) / 100;

		return priceBeforeReduction * reductionFactor;
	}
	

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
		ofDrawBitmapStringHighlight( "Reduction Percentage: " + ofToString( getReductionPercentage( amountProduct ) ) + "%", 10, 70 );
		ofDrawBitmapStringHighlight( "Price Final: " + ofToString( getFinalPrice( country ) ), 10, 300, ofColor::red );

		gui.draw();
	}
};


//========================================================================
int main( ){
	ofSetupOpenGL(1024,768, OF_WINDOW);
	ofRunApp( new ofApp());
}
