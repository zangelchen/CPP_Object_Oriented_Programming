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

  Cube & Cube::operator=(const Cube & obj) {                        //assignment operator where "Cube & Cube...& obj" means &obj onto the Cube class
    length_ = obj.length_;
    std::cout << "Assignment operator invoked!" << std::endl;    
    return *this;                                                   //return an instance of the class
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