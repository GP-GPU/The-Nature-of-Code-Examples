

#pragma once
#include <iostream>
#include "ofMain.h"

class Mover {
    public:
    
    Mover();
    void init();
    void update();
    void display();
    void checkEdges(); 
    
    ofVec2f location;
    ofVec2f velocity;
    ofVec2f acceleration;
    float topspeed;
    
};