// The Nature of Code
// Daniel Shiffman
// http://natureofcode.com
// translated by Lia

#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    //ofSetWindowShape(800, 200); //we change it in main.h
    ofEnableSmoothing();
    ofSetCircleResolution(100);
    ofBackground(255);
    ofSetFrameRate(60);

	reset();
	liquid.init(0, ofGetHeight()/2, ofGetWidth(), ofGetHeight()/2, 0.1);
}

//--------------------------------------------------------------
void testApp::update(){
   
	for (int i = 0; i < movers.size(); i++) {
		
		// Is the Mover in the liquid?
		if (liquid.contains(movers[i])) {
			// Calculate drag force
			ofVec2f dragForce = liquid.drag(movers[i]);
			// Apply drag force to Mover
			movers[i].applyForce(dragForce);
		}
		
		ofVec2f gravity;
		gravity.set(0, 0.1*movers[i].mass);
		// Apply gravity
		movers[i].applyForce(gravity);
		
		// Update and display
		movers[i].update();
		movers[i].display();
		movers[i].checkEdges();
	}
}

//--------------------------------------------------------------
void testApp::draw(){
	
	liquid.display();
	
	for (int i = 0; i < movers.size(); i++) {
    movers[i].display();
	}
	
	ofSetColor(0);
	ofDrawBitmapString("click mouse to reset",10,30);
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
	reset();
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

//--------------------------------------------------------------
void testApp::reset(){
	
	movers.clear();
	
	for (int i = 0; i < 11; i++) {
		Mover m;
		m.init(ofRandom(0.5, 3), 40+i*70, 0);
		movers.push_back(m);
	}
}