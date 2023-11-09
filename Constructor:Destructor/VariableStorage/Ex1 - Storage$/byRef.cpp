/**
 * C++ program aliasing a Cube class by reference.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "../Cube.hpp"
using uiuc::Cube;

int main() {
  // Create a 1,000-valued cube
  Cube c(10);

  // Transfer the cube
  Cube & myCube = c;            //reference where c is $1000 and myCube is pointing to c $1000 too

  return 0;
}

/* 
OUTPUT: 
- Created $1000
*/
