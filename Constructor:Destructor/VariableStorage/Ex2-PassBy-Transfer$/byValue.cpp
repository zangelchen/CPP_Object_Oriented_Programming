#include "../Cube.hpp"
using uiuc::Cube;

/*
PASS BY 
- identical to storage, arguments can be passed to functions in three different ways
1. value
2. pointer (*)
3. reference(&)                                                                       */

bool sendCube(Cube c) {    
  // ... logic to send a Cube somewhere ... sending by value!!
  return true;
}

int main() {
  // Create a 1,000-valued cube       //create $1000 
  Cube c(10);

  // Send the cube to someone
  sendCube(c);                        //create $1000 by copy, like sending a copy o fyour check 

  return 0;
}
