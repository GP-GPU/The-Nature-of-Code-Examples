// The Nature of Code
// Daniel Shiffman
// http://natureofcode.com
// translated into OF by Lia Martinez

// Example 1-2: Bouncing Ball, with PVector!


#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetWindowShape(200,200);
    ofSetBackgroundAuto(false);
    ofSetFrameRate(60);
    ofEnableSmoothing();
    
    location.set(100,100);
    velocity.set(2.5,5);
}

//--------------------------------------------------------------
void testApp::update(){

    // Add the current speed to the location.
    location += velocity;
    
    if ((location.x > ofGetWidth()) || (location.x < 0)) {
        velocity.x = velocity.x * -1;
    }
    if ((location.y > ofGetHeight()) || (location.y < 0)) {
        velocity.y = velocity.y * -1;
    }
}

//--------------------------------------------------------------
void testApp::draw(){


        ofFill();
        ofSetColor(255,10);
        ofEnableAlphaBlending();
        ofRect(0,0,ofGetWidth(),ofGetHeight());
        ofDisableAlphaBlending();
                
        // Display circle at x location    
        ofFill();
        ofSetColor(175);
        ofEllipse(location.x,location.y,16,16);
        
        ofNoFill();
        ofSetColor(0);
        ofEllipse(location.x,location.y,16,16);
         
    
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}