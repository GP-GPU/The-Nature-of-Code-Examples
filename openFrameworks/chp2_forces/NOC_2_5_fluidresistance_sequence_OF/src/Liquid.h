// The Nature of Code
// Daniel Shiffman
// http://natureofcode.com

// Liquid class

#include "Mover.h"
#include "ofMain.h"

#pragma once

class Liquid {
	
public:
	
	Liquid();
	void init(float x_, float y_, float w_, float h_, float c_);
	Boolean contains (Mover m);
	ofVec2f drag(Mover m);
	void display();
	
	// Liquid is a rectangle
	float x,y,w,h;
	// Coefficient of drag
	float c;
	
};

