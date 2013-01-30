//
//  Mover.h
//  NOC_1_7_motion101_OF
//
//  Created by lia martinez on 1/30/13.
//
//

#pragma once
#include <iostream>
#include "ofMain.h"

class Mover {
    public:
    
    Mover();
    void update();
    void display();
    void checkEdges(); 
    
    ofVec2f location;
    ofVec2f velocity;
    
};