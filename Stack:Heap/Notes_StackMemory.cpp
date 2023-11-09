
/*
STACK MEMORY
- Every variable in C++ is placed in STACK MEMORY - associated with current function and the life ccytem is tied to the function
- Starts from high addresses and growns down to 0 */

/*
POINTER
- a variable that stores the memory address of the data 
- defined by adding an * to the type of the variable

int *p = &num
type pointer name = value*/

/*
DEREFERENCE OPERATOR
- given a pointer, a livel of indirection can be removed with the dereference operator
- simply put, it the asterisk is the dereference operator. 
- dereferencing a pointer means returning the value of the variable pointed by the pointer with '&'   */

#include <iostream>
using namespace std;

int main()
{
    
//EXAMPLE 1:
int num = 7;          //1. identify the variable num to 7
int *p = &num;        //2. store address of num to pointer *p
int value_in_num=*p;  //3. create variable to store dereferenced pointer
*p=42;                //4. changing the value of pointer from 7 to 42
                      //5. output.....
                            //value_in_num = 7
                            //*p=42
                            // num = 42

//EXAMPLE 2
    int num = 7;       
        cout << num << endl;  //--> 7  (value of num)
        cout << &num << endl; //--> address123 (&num is address of num)
    int *p = &num;     
        cout << p << endl;    //--> address123 (p is pointer = address of num)
        cout << &p << endl;   //--> address122 (&p is address of pointer = right below address of num)
        cout << *p << endl;   //--> 7  (*p is dereference of p, value of pointer which is 7)

    *p=42;                
        cout << *p << endl;   //--> 42  (*p is dereference of p, changed the value of pointer from 7 to 42)
        cout << num << endl;  //--> 42  (since value of pointer changed, num is the same address, so num also changed)
}