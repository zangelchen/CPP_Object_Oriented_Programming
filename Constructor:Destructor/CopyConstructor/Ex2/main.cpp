#include "../Cube.hpp"
using uiuc::Cube;

 /*
 Three outputs 
 1. defautl constructor for c
 2. first copy constructor  for 'c' 
 3. second copy constructor for 'c2'                                                        */

Cube foo(){                //think of Cube as a new type
    Cube c;                //Step 2: foo function first calls on Cube c -> DEFAULT CONSTRUCTOR INVOKED
    return c;              //Step 3: we have an objectin foo() that needs to be copied over to main() so main can make use of it - COPY CONSTRUCTOR INVOKED 1
}

int main(){                //Step 1: in the main function, c2 is equal to foo(), so foo() function executes            
    Cube c2 = foo();       //Step 4: c2 is equal to foo value - COPY CONSTRUCTOR INVOKED 2
    return 0;                                 
}

/*
OUTPUT: 
- Expecting THREE outputs (Steps 2,3,4) with ONE default and TWO copies
*/