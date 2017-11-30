#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    pntGrid.set( pnt, true );
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground( 0 );

    ofSetColor( ofColor::lightYellow );
    
    for( int x = 0; x < worldX; x++ )
    {
        for( int y = 0; y < worldY; y++ )
        {
            if( pntGrid.get( x, y ) )
            {
                ofDrawRectangle( x, y, 1, 1 );
            }
            
        }
    }
}
