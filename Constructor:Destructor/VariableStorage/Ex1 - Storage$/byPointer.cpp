/**
 * C++ program copying a Cube currency pointer.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "../Cube.h"
using uiuc::Cube;

int main() {
  // Create a 1,000-valued cube
  Cube c(10);               // $1,000 cube

  // Transfer the cube      // pointer that points to the memory that c is defined in 
  Cube * myCube = &c;       // instead of alias (aka assignment) where two variables are equal the same cube, we have two variable, a cube and a pointer

  return 0;
}

/*
OUTPUT
- expect one output of $1000*/