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
	}

	void update()
	{

	}

	void draw()
	{
//		for ( auto &&item : lightGrid.grid_ )
//		{
//
//		}
		
	}

	kata::Grid lightGrid{ SIZE_X, SIZE_Y};
};


//========================================================================
int main( ){
	ofSetupOpenGL( SIZE_X, SIZE_Y, OF_WINDOW);
	ofRunApp( new ofApp());
}
