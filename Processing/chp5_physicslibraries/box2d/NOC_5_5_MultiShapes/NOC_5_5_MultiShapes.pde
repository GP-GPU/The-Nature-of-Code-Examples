// The Nature of Code
// Daniel Shiffman
// http://natureofcode.com

// Basic example of falling rectangles

import pbox2d.*;
import org.jbox2d.collision.shapes.*;
import org.jbox2d.common.*;
import org.jbox2d.dynamics.*;

// A reference to our box2d world
PBox2D box2d;

// A list we'll use to track fixed objects
ArrayList<Boundary> boundaries;
// A list for all of our rectangles
ArrayList<Lollipop> pops;

void setup() {
  size(800,200);
  // Initialize box2d physics and create the world
  box2d = new PBox2D(this,20);
  box2d.createWorld();
  // We are setting a custom gravity
  box2d.setGravity(0, -20);

  // Create ArrayLists	
  pops = new ArrayList<Lollipop>();
  boundaries = new ArrayList<Boundary>();

  // Add a bunch of fixed boundaries
  boundaries.add(new Boundary(width/4,height-5,width/2-50,10,0));
  boundaries.add(new Boundary(3*width/4,height-50,width/2-50,10,0));
  boundaries.add(new Boundary(width-5,height/2,10,height,0));
  boundaries.add(new Boundary(5,height/2,10,height,0));
}

void draw() {
  background(255);

  // We must always step through time!
  if (mousePressed) box2d.step();

  // Display all the boundaries
  for (Boundary wall: boundaries) {
    wall.display();
  }

  // Display all the people
  for (Lollipop p: pops) {
    p.display();
  }

  // people that leave the screen, we delete them
  // (note they have to be deleted from both the box2d world and our list
  for (int i = pops.size()-1; i >= 0; i--) {
    Lollipop p = pops.get(i);
    if (p.done()) {
      pops.remove(i);
    }
  }
}

void mousePressed() {
  Lollipop p = new Lollipop(mouseX,mouseY);
  pops.add(p);
}



