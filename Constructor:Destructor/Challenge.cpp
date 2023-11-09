#include <iostream>
using namespace std; 
/*
REQUIREMENTS
- A single constructor Pair(int a, int b): 
- This should set up pa and pb to point to newly allocated memory locations on the heap. 
- The integers at those memory locations should be assigned values according to the constructor's integer arguments a and b.

A copy constructor Pair(const Pair& other): 
- This takes as its argument a read-only reference to another Pair.
- should set up its own instance's member variables pa and pb to point to newly allocated memory locations for integers on the heap; 
- the integers at these new locations should be assigned values according to the integers that the other Pair is pointing to.

A destructor ~Pair() that de-allocates all of the the heap memory that had previously been allocated for this Pair's members.*/
class Pair {
     public:
     int *pa,*pb;         
     Pair(int, int);             
     Pair(const Pair &);
     ~Pair();
 };
 
 /*Implement its member functions below. */
   Pair::Pair(int a, int b){      //STEP 1: default constructor (p(15,16))
    pa = new int;                 //pointer a cast to heap
    pb = new int;                 //pointer b cast to heap
    *pa=a;                        //dereference value of pointer a = 15
    *pb=b;                        //dereference value of pointer b = 16 -> go back to main function
   }
   Pair::Pair(const Pair & obj){  //STEP 2: copy constructor
    pa = new int;                 // cast the copy onto a new heap memory
    pb = new int;                 // cast the copy onto a new heap memory
    *pa = *obj.pa;                // make a copy so the pointer points to value of integers in previous pair (* because we want the value, not the address)
    *pb = *obj.pb;                // make a copy so the pointer points to value of integers in previous pair (* because we want the value, not the address)
   }
   Pair::~Pair(){
     delete pa;
     delete pb;
   }
 
  
int main() {                    
  Pair p(15,16);                  //Step 1: variable p contains (15,16) -> go to Pair (int a, int b) member function
  Pair q(p);                      //Step 2: variable q equals p, so q=(15,16) -> Copy Constructor executed
  Pair *hp = new Pair(23,42);     //Step 3: new dereference pointer hp equal to (23,42) which is on heap
  delete hp;                      //Step 4: hp is deleted, ~Pair() automatically executed
  
  std::cout << "If this message is printed,"
    << " at least the program hasn't crashed yet!\n"
    << "But you may want to print other diagnostic messages too." << std::endl;
  return 0;
}