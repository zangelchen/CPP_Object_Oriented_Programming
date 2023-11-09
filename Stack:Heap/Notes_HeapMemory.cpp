/*
HEAP MEMORY 
- exist for longer than the lifecycle of the function
- value goes from smaller to larger (opposite of stack)
- Created by a NEW OPERATOR which does 3 things
    1. allocate momey on the heat for the data structure
    2. initalize the data structure
    3. return a pointer to the start of the data structure
- the memory is reclaimed when pointer is passed to the DELETE operator

ex)
int * numPtr = new int; //stack memory from numptr to HEAP memory via 'new' int

*/

#include <iostream>

int main() {
  int *numPtr = new int;

  std::cout << "*numPtr: " << *numPtr << std::endl; // dereference numPtr -> prints out any random integer on the HEAP
  std::cout << " numPtr: " <<  numPtr << std::endl; // contents of numPtr itself -> address of HEAP memory (heap memory goes bottom up)
  std::cout << "&numPtr: " << &numPtr << std::endl; // address of numPtr on the STACK (goes top down, so large number)
 
  *numPtr = 42;
  std::cout << "*numPtr assigned 42." << std::endl;

  std::cout << "*numPtr: " << *numPtr << std::endl; // dereference numPtr -> prints out 42
  std::cout << " numPtr: " <<  numPtr << std::endl; // contents of numPtr itself -> address of HEAP memory (heap memory goes bottom up) -UNCHANGED
  std::cout << "&numPtr: " << &numPtr << std::endl; // address of numPtr on the STACK (goes top down, so large number) - UNCHANGED

  return 0;
}
