#include "../Cube.hpp"
#include <iostream>

using uiuc::Cube;

bool sendCube(Cube & c) {    
  // ... logic to send a Cube somewhere ... sending by reference!!
  return true;
}

int main() {
  // Create a 1,000-valued cube
  Cube c(10);                         //$1,000 created

  // Send the cube to someone
  sendCube(c);                        //sent reference to someone

  return 0;
}

/*
OUTPUT: 
1. $1,000 created once
*/
