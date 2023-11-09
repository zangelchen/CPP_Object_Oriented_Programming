#include "Cube.hpp"
using uiuc::Cube;

int main() {
  int *p = new int;          // dereference integer pointer. points value from STACK to HEAP
  Cube *c = new Cube;        // dereference c. points values in class Cube from STACK to HEAP

  *p = 42;                  // pointer value changes to 42
  (*c).setLength(4);        // dereference of c, the value is set to length of 4

  delete c;  c = nullptr;   // delete c from HEAP, and c is equal to the null pointer
  delete p;  p = nullptr;   // delete p from HEAP, and p is equal to the null pointer
  return 0;

  /*
  NULLPTR is a pointer that points to the memory address 0x0
  - reserved and never used by the system
  - always generate a sementation fault when accessed
  - calls to delete 0x0 are ignored */

/* 
GOOD PRACTICE - with nullptr
- when you delete c, the pointer c still stores the address fot he deleted variable, which is no longer valid to dereference
- protect against manual mistakes! manually set c to nullptr */

/* 
ARROW OPERATOR 
- when an object is stored via a pointer, access can be made to member functions usign the -> operator:

(*c).getVolume()    -> dereference c for the value to process the function getVolume
c->getVolume()      -> simplifies the format, means the same */

}
