#pragma once

namespace uiuc {
  class Cube {
    public:  // Public members:
      /**
       * Returns the volume of the cube.
       * 
       * @return
       *   Volume of the cube.
       */
      double getVolume();
      double getSurfaceArea();

      // Sets the length of the side of the cube.
      // @param length
      //   The new length of the side of the cube.
      void setLength(double length);

    private: // Private members:
      double length_;
  };
}