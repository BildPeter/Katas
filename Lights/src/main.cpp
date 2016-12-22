#include "ofMain.h"
#include "Grid.h"


#define SIZE_X 1000
#define SIZE_Y 1000

class ofApp : public ofBaseApp{
public:
	void setup()
	{}

	void update()
	{

	}

	void draw()
	{
		
		
	}

	kata::Grid lightGrid{ SIZE_X, SIZE_Y};
};


//========================================================================
int main( ){
	ofSetupOpenGL( SIZE_X, SIZE_Y, OF_WINDOW);
	ofRunApp( new ofApp());
}
