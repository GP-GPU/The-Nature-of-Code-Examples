//
//  Particle.h
//  NOC_4_05_ParticleSystemInheritancePolymorphism_OF
//
//  Created by Lia Martinez on 2/25/13.
//
//

#ifndef __NOC_4_05_ParticleSystemInheritancePolymorphism_OF__Particle__
#define __NOC_4_05_ParticleSystemInheritancePolymorphism_OF__Particle__

#include <iostream>
#include "ofMain.h"

class Particle {
public:
	Particle(ofVec2f l);
	//void init(ofVec2f l);
	virtual void run();
	virtual void update();
	virtual void display();
	bool isDead();
	
	
	ofVec2f location;
	ofVec2f velocity;
	ofVec2f acceleration;
	float lifespan;
	
	
};


#endif /* defined(__NOC_4_05_ParticleSystemInheritancePolymorphism_OF__Particle__) */
