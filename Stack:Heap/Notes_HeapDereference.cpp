#include <iostream>

using std::cout;
using std::endl;

int main() {
  int *p, *q;                   //define the dereference value pf and q as integers
  p = new int;                  //cast pointer p onto heap 
  q = p;                        //set pointer q equal to pointer p -> both point to the same spot on the heap
  *q = 8;                       //dereference value of q is 8
  cout << *p << endl;           //dereference value of p is 8 because pointers are set to the same spot on the heap

  q = new int;                  //cast pointer q onto the heap (so now, it's not pointing to same spot as p on the heap)
  *q = 9;                       //dereference value of q is 9
  cout << *p << endl;           //value is 8
  cout << *q << endl;           //value is 9

  return 0;
}
