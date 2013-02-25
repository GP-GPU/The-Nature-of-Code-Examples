// The Nature of Code
// Daniel Shiffman
// http://natureofcode.com

// Simple Particle System
// translated by lia

#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	ofBackground(255);
	ofSetCircleResolution(60);
	ofSetFrameRate(60);
	ofVec2f pos;
	pos.set(ofGetWidth()/2,50);
	ps.init(pos);
	
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
	ps.addParticle();
	ps.run();

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