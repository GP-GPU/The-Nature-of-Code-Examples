//
//  Confetti.h
//  NOC_4_05_ParticleSystemInheritancePolymorphism_OF
//
//  Created by Lia Martinez on 2/25/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#pragma once
#include "ofMain.h"
#include "Particle.h"

class Confetti: public Particle {
public:
	Confetti(ofVec2f l) ;
	void display();
};

