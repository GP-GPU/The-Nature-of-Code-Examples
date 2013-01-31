#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetWindowShape(800, 200);
    ofEnableSmoothing();
    ofSetCircleResolution(100);
    ofBackground(255);
    ofSetFrameRate(60);
}

//--------------------------------------------------------------
void testApp::update(){
    ofVec2f wind;
    wind.set(0.01,0);
    ofVec2f gravity;
    gravity.set(0,0.1);
    m.applyForce(wind);
    m.applyForce(gravity);
    
    m.update();
    m.checkEdges();
}

//--------------------------------------------------------------
void testApp::draw(){
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