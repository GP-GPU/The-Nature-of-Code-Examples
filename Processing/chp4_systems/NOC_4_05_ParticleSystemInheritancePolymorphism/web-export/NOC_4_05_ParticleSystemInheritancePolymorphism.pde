// The Nature of Code
// Daniel Shiffman
// http://natureofcode.com

ParticleSystem ps;

void setup() {
  size(800,200);
  ps = new ParticleSystem(new PVector(width/2,50));
}

void draw() {
  background(255);
  ps.addParticle();
  ps.run();
}
// The Nature of Code
// Daniel Shiffman
// http://natureofcode.com

class Confetti extends Particle {

  // We could add variables for only Confetti here if we so

  Confetti(PVector l) {
    super(l);
  }

  // Inherits update() from parent

  // Override the display method
  void display() {
    rectMode(CENTER);
    fill(127,lifespan);
    stroke(0,lifespan);
    strokeWeight(2);
    pushMatrix();
    translate(location.x,location.y);
    float theta = map(location.x,0,width,0,TWO_PI*2);
    rotate(theta);
    rect(0,0,12,12);
    popMatrix();
  }
}

// The Nature of Code
// Daniel Shiffman
// http://natureofcode.com

// Simple Particle System

class Particle {
  
  PVector location;
  PVector velocity;
  PVector acceleration;
  float lifespan;

  Particle(PVector l) {
    acceleration = new PVector(0,0.05);
    velocity = new PVector(random(-1,1),random(-2,0));
    location = l.get();
    lifespan = 255.0;
  }

  void run() {
    update();
    display();
  }

  // Method to update location
  void update() {
    velocity.add(acceleration);
    location.add(velocity);
    lifespan -= 2.0;
  }

  // Method to display
  void display() {
    stroke(0,lifespan);
    strokeWeight(2);
    fill(127,lifespan);
    ellipse(location.x,location.y,12,12);
  }
  
  // Is the particle still useful?
  boolean isDead() {
    if (lifespan < 0.0) {
      return true;
    } else {
      return false;
    }
  }
}


// The Nature of Code
// Daniel Shiffman
// http://natureofcode.com

class ParticleSystem {
  ArrayList<Particle> particles;
  PVector origin;

  ParticleSystem(PVector location) {
    origin = location.get();
    particles = new ArrayList<Particle>();
  }

  void addParticle() {
    float r = random(1);
    if (r < 0.5) { 
      particles.add(new Particle(origin));
    } else {
      particles.add(new Confetti(origin));
    }
  }

  void run() {
    Iterator<Particle> it = particles.iterator();
    while (it.hasNext()) {
      Particle p = it.next();
      p.run();
      if (p.isDead()) {
        it.remove();
      }
    }
  }
}





