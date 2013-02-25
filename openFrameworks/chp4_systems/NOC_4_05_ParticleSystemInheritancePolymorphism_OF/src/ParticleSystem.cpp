// The Nature of Code
// Daniel Shiffman
// http://natureofcode.com

// Simple Particle System


#include "ParticleSystem.h"

ParticleSystem::ParticleSystem() {
	
}

void ParticleSystem::init (ofVec2f location){
	origin = location;
    //particles = new ArrayList<Particle>();
}

void ParticleSystem::addParticle(){
	float r = ofRandom(1);
	
    if (r < 0.5) {
		
		Particle * p = new Particle(origin);
		particles.push_back(p);

    }
	else {

		Confetti * c = new Confetti (origin);
		particles.push_back(c);

    }
	ofDrawBitmapString(ofToString(particles.size()), 30, 30);
}

void ParticleSystem::run(){

	//you can also use an iterator
	for (int i = 0; i < particles.size(); i++){
		particles[i]->run();
		if (particles[i]->isDead()) particles.erase(particles.begin()+i);
	}
}