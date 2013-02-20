// The Nature of Code
// Daniel Shiffman
// http://natureofcode.com
// translated by Lia

#include "testApp.h"


//--------------------------------------------------------------
void testApp::setup(){
 
    ofEnableSmoothing();
    ofSetCircleResolution(100);
    ofBackground(255);
    ofSetFrameRate(60);
}

//--------------------------------------------------------------
void testApp::update(){
	
	ofVec2f force = a.attract(m);
	m.applyForce(force);
	m.update();
	
	a.drag();
	a.hover(ofGetMouseX(),ofGetMouseY());
}

//--------------------------------------------------------------
void testApp::draw(){
	a.display();
	m.display();
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
	a.clicked(ofGetMouseX(),ofGetMouseY());
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
	 a.stopDragging(); 
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