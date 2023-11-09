#include "../Cube.hpp"
using uiuc::Cube;

/*
CUSTOM COPY CONSTRUCTOR 
- a class constructor
- has exactly one argument
- argument must consist of reference of the same type as the class                                                      */

/*
COPY CONSTRUCTOR INVOCATION - invoked automatically when
1. passing an object as an parameter (by value)
2. returning an object from a function (by value)
3. initializing a new object                                                                                            */

void foo(Cube cube) {                           //foo function pass thorugh Cub copy constructor
}

int main(){
    Cube c;                                  //create a cube, invoke default constructor becaues it is in Cube
    foo(c);                                  //call foo, foo takes in a cube as an argument, because the argument is being passed into a function, it has to go through the 
    return 0;                                //copy constructor so the copy constructor is invoked
}