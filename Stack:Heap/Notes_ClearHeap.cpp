
#include <iostream>

using std::cout;
using std::endl;

int main() {
  int *x;                                  // dereference value of x is an integer type
  int size = 3;                            // variable size is equal to 3
  x = new int[size];                       // x is cast onto the heap with integer array of 3...aka 3 spaces to be populated

  for (int i = 0; i < size; i++) {         //first integer is 1, integer is less than 3, increase integer by 1 with each iteration until integer is 3
    x[i] = i + 3;                          // output -> 3,4,5
  }

  delete[] x;                              //clear the heap memory
}
