// The Nature of Code
// Daniel Shiffman
// http://natureofcode.com
// translated by Lia

#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetWindowShape(800, 200);
    ofEnableSmoothing();
    ofSetCircleResolution(100);
    ofBackground(255);
    ofSetFrameRate(60);
	
	for (int i = 0; i < 20; i++) {
		Mover m;
		m.init(ofRandom(0.1,4),0,0);
		movers.push_back(m);
	}
}

//--------------------------------------------------------------
void testApp::update(){
    ofVec2f wind;
    wind.set(0.01,0);
   
	for (int i = 0; i < movers.size(); i++) {
		
		ofVec2f gravity;
		gravity.set(0, 0.1*movers[i].mass);
		
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