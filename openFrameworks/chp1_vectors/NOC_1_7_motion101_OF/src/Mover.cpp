//
//  Mover.cpp
//  NOC_1_7_motion101_OF
//
//  Created by lia martinez on 1/30/13.
//
//

#include "Mover.h"

Mover::Mover() {
    location.set(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
    velocity.set(ofRandom(-2, 2), ofRandom(-2, 2));
}

void Mover::update() {
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