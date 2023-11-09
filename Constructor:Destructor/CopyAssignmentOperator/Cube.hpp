#pragma once

namespace uiuc {
  class Cube {
    public:
      Cube();                               // Custom default constructor
      Cube(const Cube & obj);               // Custom copy constructor

      double getVolume();
      double getSurfaceArea();
      void setLength(double length);

    private:
      double length_;
  };
}
