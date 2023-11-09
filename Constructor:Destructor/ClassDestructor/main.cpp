#include "Cube.hpp"
using uiuc::Cube;

int main() {                      //OUTPUT Expectations:
  cube_on_stack();                //Part 1: Executes cube_on_stack and creates $27, returns $27, destroys $27 (automatically)
  cube_on_heap();                 //Part 2: Executes cube_on_heap and creates $1000, creates $1 (default), destroys $1000 (intentionally)
  cube_on_stack();                //Part 3: Executes cube_on_stack and creates $27, returns $27, destroys $27
  return 0;
}

double cube_on_stack() {          //creates 3^3 = $27
  Cube c(3);
  return c.getVolume();           //returns $27
}

void cube_on_heap() {             
  Cube* c1 = new Cube(10);       //transfers from stack to heap. c1 is pointer to $1,000 (Cube(10)) on heap 
  Cube* c2 = new Cube;           //transfers from stack to heap. c2 is pointer to $1 (Cube) on heap 
  delete c1;                     //pointer c1 is deleted (BUT c2 still exists and points to the $1 on heap)
}
