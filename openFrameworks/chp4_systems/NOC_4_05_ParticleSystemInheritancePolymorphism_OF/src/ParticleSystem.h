// The Nature of Code
// Daniel Shiffman
// http://natureofcode.com

// Simple Particle System
//

#pragma once
#include "ofMain.h"
#include "Particle.h"
#include "Confetti.h"

class ParticleSystem {
public:
	
	ParticleSystem();
	void init (ofVec2f location);
	void addParticle();
	void run();

	vector<Particle*>particles;
	ofVec2f origin;

};

