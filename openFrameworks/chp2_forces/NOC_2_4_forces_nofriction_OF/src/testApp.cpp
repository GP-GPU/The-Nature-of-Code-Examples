// The Nature of Code
// Daniel Shiffman
// http://natureofcode.com
// translated by Lia

#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetWindowShape(383, 200);
    ofEnableSmoothing();
    ofSetCircleResolution(100);
    ofBackground(255);
    ofSetFrameRate(60);
	
	ofSeedRandom(1);
	
	for (int i = 0; i < 5; i++) {
		Mover m;
		m.init(ofRandom(1, 4), ofRandom(ofGetHeight()), 0);
		movers.push_back(m);
	}
}

//--------------------------------------------------------------
void testApp::update(){
   
	for (int i = 0; i < movers.size(); i++) {
		
		ofVec2f wind;
		wind.set(0.01,0);
		
		ofVec2f gravity;
		gravity.set(0, 0.1*movers[i].mass);
		
		float c = 0.05;
		ofVec2f friction = movers[i].velocity;
		friction *=- 1;
		friction.normalize();
		friction *= c;
		
		//movers[i].applyForce(friction);
		movers[i].applyForce(wind);
		movers[i].applyForce(gravity);
		
		movers[i].update();
		movers[i].checkEdges();
	}
}

//--------------------------------------------------------------
void testApp::draw(){
	for (int i = 0; i < movers.size(); i++) {
    movers[i].display();
	}
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