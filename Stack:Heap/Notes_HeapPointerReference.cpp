#include <iostream>

using std::cout;
using std::endl;

int main() {                              //  STACK           HEAP
  int *x = new int;                       //  int *x   ->    int y=4
  int &y = *x;            // &y is a reference variable of derefence pointer x, so y gives us an alias of the memory in x
  y = 4;                  // since y=4, the memory value is 4

  cout << &x << endl;    // on the stack, large number 0xffff4567
  cout << x << endl;     // on the heap, small number 0x123
  cout << *x << endl;    // 4: dereference value x = variable y and y=4

  cout << &y << endl;    // on the heap, small number 0x123
  cout << y << endl;     // 4
  //cout << *y << endl;  //no dereference value of a nonpointer - error "indirection requies pointer operant"

  return 0;
}
