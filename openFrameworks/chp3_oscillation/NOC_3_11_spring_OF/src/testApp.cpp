#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    ofBackground(255);
    
    spring.init(ofGetWidth()/2, 10, 100);
    bob.init(ofGetWidth()/2, 100);
    
    ofSetFrameRate(60);

}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofVec2f gravity;
    gravity.set(0,2);

    bob.applyForce (gravity);
    
    // Connect the bob to the spring (this calculates the force)
    spring.connect(bob);
    // Constrain spring distance between min and max
    spring.constrainLength(bob,30,200);
    
    // Update bob
    bob.update();
    // If it's being dragged
    bob.drag(ofGetMouseX(),ofGetMouseY());
    
    // Draw everything
    spring.displayLine(bob); // Draw a line between spring and bob
    bob.display();
    spring.display();
    
    ofSetColor(0);
    ofDrawBitmapString("click on bob to drag",10,ofGetHeight()-5);

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
  bob.clicked(ofGetMouseX(),ofGetMouseY());
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
  bob.stopDragging(); 
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