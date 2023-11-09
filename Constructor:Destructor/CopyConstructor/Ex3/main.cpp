#include "../Cube.hpp"
using uiuc::Cube;

int main() {
  Cube c;                           //STEP 1: DEFAULT CONSTRUCTOR INVOKED
  Cube myCube = c;                  //STEP 2: myCube takes on the value of c, c value coped into myCube- COPY CONSTRUCTOR INVOKED

  return 0;
}
