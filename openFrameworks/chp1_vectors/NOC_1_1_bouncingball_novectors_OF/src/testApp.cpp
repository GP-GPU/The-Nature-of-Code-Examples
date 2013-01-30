
// The Nature of Code
// Daniel Shiffman
// http://natureofcode.com
// translated into OF by Lia Martinez


#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetWindowShape(800, 200);
    ofEnableSmoothing();
    ofBackground(255);
    ofSetFrameRate(60);
    
    x = 100;
    y = 100;
    xspeed = 2.5;
    yspeed = 2;
}

//--------------------------------------------------------------
void testApp::update(){
    // Add the current speed to the location.
    x = x + xspeed;
    y = y + yspeed;
    
    if ((x > ofGetWidth()) || (x < 0)) {
        xspeed = xspeed * -1;
    }
    if ((y > ofGetHeight()) || (y < 0)) {
        yspeed = yspeed * -1;
    }
    
}

//--------------------------------------------------------------
void testApp::draw(){
    
    // Display circle at x location
    ofFill(); 
    ofSetColor(127);
    ofEllipse(x, y, 48, 48);
    
    ofNoFill();
    ofSetColor(0);
    ofSetLineWidth(2);
    ofEllipse(x, y, 48, 48);
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