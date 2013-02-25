//
//  Confetti.cpp
//  NOC_4_05_ParticleSystemInheritancePolymorphism_OF
//
//  Created by Lia Martinez on 2/25/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#include "Confetti.h"

Confetti::Confetti(ofVec2f l):Particle::Particle(l){
}


void Confetti::display(){
	//rectMode(CENTER);
	ofSetRectMode(OF_RECTMODE_CENTER);
    ofSetColor(127,lifespan);
    //stroke(0,lifespan);
    //strokeWeight(2);
    ofPushMatrix();
    ofTranslate(location.x,location.y);
    float theta = ofMap(location.x,0,ofGetWidth(),0,TWO_PI*2);
    ofRotate(theta);
	ofEnableAlphaBlending();
    ofRect(0,0,12,12);
	ofDisableAlphaBlending();
    ofPopMatrix();
}
