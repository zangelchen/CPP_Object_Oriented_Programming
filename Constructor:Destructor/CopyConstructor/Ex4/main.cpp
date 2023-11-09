#include "../Cube.hpp"
using uiuc::Cube;

int main() {
  Cube c;                           //STEP 1: DEFAULT CONSTRUCTOR INVOKED for c
  Cube myCube;                      //STEP 2: DEFAULT CONSTRUCTOR INVOKED for myCube (default, NOT copy because myCube is a different variable than c)

  myCube=c;                         //STEP 3: just an assignment, NOT a construction aka creating a new build, so no output here

  return 0;
}
