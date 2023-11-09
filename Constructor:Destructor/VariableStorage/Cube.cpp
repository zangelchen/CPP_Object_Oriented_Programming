#include "Cube.hpp"
#include <iostream>
/* 
Currency Problem where volume = 1 is same as $5. 
- When new $ is created $40, it gets passed the below
  1. step 1, default, one parameter constructor - we're creating money getVolume = $1000
  2. when new money is created, copy constructor is assigned an alias "via copy" - $1000 via copy
  3. assignment operator transforms the size of the cube before/after. if we get +$20, then volume increases $0 -> $1000
- all three of theses are concerning because all three are creating money, and that takes up 3x amount of space as creating it once. 

How to resolve? Look through the examples 
*/

namespace uiuc {

  Cube::Cube(double length) {                                        //default constructor - one parameter          
    length_ = length;                                                //whenever we call the constructor, we're creating money
    std::cout << "Created $" << getVolume() << std::endl;
  }

  Cube::Cube(const Cube & obj) {                                    //copy constructor takes in a cube by reference (hence &obj)
    length_ = obj.length_;
    std::cout << "Created $" << getVolume() << " via copy" << std::endl;
  }

  Cube & Cube::operator=(const Cube & obj) {                        //assignment operator transforms from volume before to volume after. it's growing or shrinking cube
    std::cout << "Transformed $" << getVolume() << "-> $" << obj.getVolume() << std::endl;
    length_ = obj.length_;
    return *this;
  }

  double Cube::getVolume() const{
    return length_ * length_ * length_;
  }

  double Cube::getSurfaceArea() const{
    return 6 * length_ * length_;
  }

  void Cube::setLength(double length) {
    length_ = length;
  }
}