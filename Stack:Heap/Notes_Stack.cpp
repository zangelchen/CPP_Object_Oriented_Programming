#include <iostream>

using std::cout;
using std::endl;

int main() {
  int  i =  2,  j =  4,  k =  8;                      //stack memory - values
  int *p = &i, *q = &j, *r = &k;                      //stack memory - dereference pointers to values at address of variables

  k = i;                                              // k = 2
  cout << i << j << k << *p << *q << *r << endl;      // i=2, j=4, k=2, p=2, q=4, r=2

  p = q;                                              // p maps to address of j
  cout << i << j << k << *p << *q << *r << endl;      // i=2, j=4, k=2, p=4, q=4, r=2

  *q = *r;                                            // dereference q equals dereference r....so j changes to 2 so dereference q mapping to j equals to 2
  cout << i << j << k << *p << *q << *r << endl;      // i=2, j=2, k=2, p=2, q=2, r=2

  return 0;
}
