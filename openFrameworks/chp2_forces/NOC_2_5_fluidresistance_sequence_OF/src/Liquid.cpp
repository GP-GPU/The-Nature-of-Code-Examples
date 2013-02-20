
#include "Liquid.h"

Liquid::Liquid () {
	
}

void Liquid::init(float x_, float y_, float w_, float h_, float c_){
	x = x_;
    y = y_;
    w = w_;
    h = h_;
    c = c_;
}


Boolean Liquid::contains (Mover m){
	ofVec2f l = m.location;
    if (l.x > x && l.x < x + w && l.y > y && l.y < y + h) {
		return true;
    }
    else {
		return false;
    }
}

// Calculate drag force
ofVec2f Liquid::drag(Mover m){
	// Magnitude is coefficient * speed squared
    float speed = m.velocity.length();
    float dragMagnitude = c * speed * speed;
	
    // Direction is inverse of velocity
    ofVec2f dragForce = m.velocity;
    dragForce *=-1;
    
    // Scale according to magnitude
    // dragForce.setMag(dragMagnitude);
    dragForce.normalize();
    dragForce *= dragMagnitude;
    return dragForce;
}

void Liquid::display(){
	ofFill();
    ofSetColor(50);
    ofRect(x,y,w,h);
}