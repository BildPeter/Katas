#include "ofMain.h"
#include "Grid.h"


#define SIZE_X 1000
#define SIZE_Y 1000

class ofApp : public ofBaseApp{
public:
	void setup()
	{
		ofLogNotice() << "X: " << lightGrid.grid_.size();
		ofLogNotice() << "Y: " << lightGrid.grid_.at(0).size();

		lightGrid.turnOn( 100, 100 );
	}

	void update()
	{

	}

	void draw()
	{
		ofBackground( ofColor::black );
		ofSetColor( ofColor::lightYellow );

		//TODO better iteration
		for ( int i = 0; i < SIZE_X; ++i )
		{
			for ( int j = 0; j < SIZE_Y; ++j )
			{
				if ( lightGrid.isOn( i, j ) )
				{
					ofDrawRectangle( ofPoint(i,j), 1, 1 );
				}
			}
		}
		
	}

	kata::Grid lightGrid{ SIZE_X, SIZE_Y};
};


//========================================================================
int main( ){
	ofSetupOpenGL( SIZE_X, SIZE_Y, OF_WINDOW);
	ofRunApp( new ofApp());
}
