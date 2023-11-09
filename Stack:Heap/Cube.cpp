#include "Cube.hpp"

namespace uiuc {
  // Return volume ?
  double Cube::getVolume() {
    return length_ * length_ * length_;
  }

  double Cube::getSurfaceArea() {
    return 6 * length_ * length_;
  }

  // Length returning thing
  void Cube::setLength(double length) {
    length_ = length;
  }
}
