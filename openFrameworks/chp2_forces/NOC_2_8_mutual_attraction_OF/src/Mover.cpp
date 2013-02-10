//// The Nature of Code
// Daniel Shiffman
// http://natureofcode.com
//  Mover.cpp
//  NOC_1_10_motion101_OF
//
//
//

#include "Mover.h"

Mover::Mover() {
}

void Mover::init(float m, float x , float y){
	mass = m;
    location.set(x,y);
    velocity.set(0, 0);
    acceleration.set(0, 0);
	
	g = 0.4;
}

void Mover::applyForce(ofVec2f force) {
    ofVec2f f;
    f.set(force / mass);
    acceleration +=f;
}

void Mover::update() {
	
    velocity += acceleration;
    location += velocity;
    acceleration *= 0;
	
}

void Mover::display(){
    ofFill();
    ofSetColor(0, 100);
	ofEnableAlphaBlending();
    ofEllipse(location.x, location.y, mass*24, mass*24);
	ofDisableAlphaBlending();
    
    ofNoFill();
    ofSetColor(0);
    ofSetLineWidth(1);
    ofEllipse(location.x, location.y, mass*24, mass*24);	
}

ofVec2f Mover::attract(Mover m) {
    ofVec2f force;
	force.set(location - m.location);             // Calculate direction of force
    float distance = force.length();                                 // Distance between objects
    distance = ofClamp(distance, 5.0, 25.0);                             // Limiting the distance to eliminate "extreme" results for very close or very far objects
    force.normalize();                                            // Normalize vector (distance doesn't matter here, we just want this vector for direction
	
    float strength = (g * mass * m.mass) / (distance * distance); // Calculate gravitional force magnitude
	force *= strength;                                         // Get force vector --> magnitude * direction
    return force;

}