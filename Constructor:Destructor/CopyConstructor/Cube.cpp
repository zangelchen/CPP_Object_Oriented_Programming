#include "Cube.hpp"
#include <iostream>

int length_;

namespace uiuc {
  Cube::Cube() {                                                    //default constructor           
    length_ = 1;
    std::cout << "Default constructor invoked!" << std::endl;
  }

  Cube::Cube(const Cube & obj) {                                    //copy constructor
    length_ = obj.length_;
    std::cout << "Copy constructor invoked!" << std::endl;
  }

  double Cube::getVolume() {
    return length_ * length_ * length_;
  }

  double Cube::getSurfaceArea() {
    return 6 * length_ * length_;
  }

  void Cube::setLength(double length) {
    length_ = length;
  }
}
