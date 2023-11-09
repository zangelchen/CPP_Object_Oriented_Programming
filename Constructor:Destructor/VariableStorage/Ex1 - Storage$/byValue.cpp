#include "../Cube.hpp"
using uiuc::Cube;

int main() {
  // Create a 1,000-valued cube     //DEFAULY CONSTRUCTOR CALLED
  Cube c(10);

  // Transfer the cube
  Cube myCube = c;                  //COPY CONSTRUCTOR CALLED 

  return 0;                         // NOW WE HAV TWO CUBES, so we have $2000 insted of $1000
}

/* 
OUTCOME:
1. Created $1000
2. Created $1000 via copy 

Total is $2000 */
