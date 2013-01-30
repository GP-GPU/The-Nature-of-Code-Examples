// The Nature of Code
// Daniel Shiffman
// http://natureofcode.com
// translated by Lia

#include "Mover.h"

Mover::Mover() {
    location.set(ofGetWidth()/2, ofGetHeight()/2);
    velocity.set(0,0);
    acceleration.set(-0.001, 0.01);
    topspeed = 10;
}

void Mover::update() {
    velocity += acceleration;
    velocity.limit(topspeed);
    location += velocity;
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
        location.x = 0;
    }
    else if (location.x < 0) {
        location.x = ofGetWidth();
    }
    
    if (location.y > ofGetHeight()) {
        location.y = 0;
    }
    else if (location.y < 0) {
        location.y = ofGetHeight();
    }
}