#include "../Cube.hpp"
#include <iostream>

using uiuc::Cube;

bool sendCube(Cube * c) {    
  // ... logic to send a Cube somewhere ...
  return true;
}

int main() {
  // Create a 1,000-valued cube
  Cube c(10);

  // Send the cube to someone
  sendCube(&c);                     //pointer to reference to the $1,000 that's created once

  return 0;
}
 /*
 OUTCOME: 
 1. $1,000 created once*/