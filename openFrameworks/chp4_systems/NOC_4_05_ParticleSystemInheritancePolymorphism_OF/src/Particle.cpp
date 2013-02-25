//
//  Particle.cpp
//  NOC_4_05_ParticleSystemInheritancePolymorphism_OF
//
//  Created by Lia Martinez on 2/25/13.
//
//

#include "Particle.h"

Particle::Particle(ofVec2f l) {
	acceleration.set(0,0.05);
    velocity.set(ofRandom(-1,1),ofRandom(-2,0));
    location = l;
    lifespan = 255.0;
}


 void Particle::run() {
	update();
    display();
}

 void Particle::update() {
	velocity += acceleration;
    location += velocity;
    lifespan -= 2.0;
}

void Particle::display() {
	//stroke(0,lifespan);
    //strokeWeight(2);
	
    ofSetColor(127,lifespan);
	ofEnableAlphaBlending();
    ofEllipse(location.x,location.y,12,12);
	ofDisableAlphaBlending();
}

bool Particle::isDead() {
	if (lifespan < 0.0) {
		return true;
    } else {
		return false;
    }
}