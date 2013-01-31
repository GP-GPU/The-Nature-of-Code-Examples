//
//  Mover.cpp
//  NOC_1_10_motion101_OF
//
//
//

#include "Mover.h"

Mover::Mover() {
    location.set(30,30);
    velocity.set(0,0);
    acceleration.set(0,0);
    mass = 1;
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
    ofSetColor(127);
    ofEllipse(location.x, location.y, 48, 48);
    
    ofNoFill();
    ofSetColor(0);
    ofSetLineWidth(2);
    ofEllipse(location.x, location.y, 48, 48);    
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