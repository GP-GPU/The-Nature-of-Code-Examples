//
//  Mover.cpp
//  NOC_1_10_motion101_OF
//
//
//

#include "Mover.h"

Mover::Mover() {
}


void Mover::init (float m, float x , float y) {
	mass = m;
    location.set(x,y);
    velocity.set(0,0);
    acceleration.set(0,0);
}

void Mover::applyForce(ofVec2f force) {
    ofVec2f f;
    f.set(force /= mass);
    acceleration +=f;
}

void Mover::update() {

    velocity += acceleration;
    location += velocity;
    acceleration *= 0; 
        
}

void Mover::display(){
    ofFill();
    ofSetColor(0,127);
	ofEnableAlphaBlending();
    ofEllipse(location.x, location.y, mass*16,mass*16);
    ofDisableAlphaBlending();
	
    ofNoFill();
    ofSetColor(0);
    ofSetLineWidth(1);
    ofEllipse(location.x, location.y, mass*16,mass*16);
	
}

void Mover::checkEdges(){
    
    if (location.x > ofGetWidth()) {
        location.x = ofGetWidth();
        velocity.x *= -1;
    }
    else if (location.x < 0) {
        velocity.x *= -1;
        location.x = 0;
    }
    
    if (location.y > ofGetHeight()) {
        velocity.y *= -1;
        location.y = ofGetHeight();
    }
}