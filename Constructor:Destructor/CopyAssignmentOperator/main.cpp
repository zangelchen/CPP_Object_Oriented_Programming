/* 
COPY CONSTRUCTOR VS ASSIGNMENT OPERATOR:
- copy constructor creates a new object (cosntructor)
- assignment operator assigns a vlaue to an existing object, always called on an object that has already been constructed */

/* 
CUSTOM ASSIGNMENT OPERATOR
- public member function of the class
- has function name 'operator='
- has return value of a reference of the class type
- has exactly one argument (const reference of class' type) 

ex) Cube &Cube::operator=(const Cube & obj)
    -> assign the values in reference object "&obj" to the instance of class it's called upon "Cube"                     */

#include "Cube.hpp"
using uiuc::Cube;

int main() {
  Cube c;                   //STEP 1: DEFAULT CONSTRUCTOR INVOKED
  Cube myCube;              //STEP 2: SECOND DEFAULT CONSTRUCTOR INVOKED

  myCube = c;               //STEP 3: ASSIGNMENT OPERATOR - myCube takes on the value of c  

  return 0;
}
