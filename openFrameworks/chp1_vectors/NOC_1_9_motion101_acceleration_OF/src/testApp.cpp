
// The Nature of Code
// Daniel Shiffman
// http://natureofcode.com
// translated by Lia

#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetWindowShape(800, 200);
    ofEnableSmoothing();
    ofBackground(255);
    ofSetFrameRate(60);
}

//--------------------------------------------------------------
void testApp::update(){
    mover.update();
    mover.checkEdges();
}

//--------------------------------------------------------------
void testApp::draw(){
    mover.display();
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