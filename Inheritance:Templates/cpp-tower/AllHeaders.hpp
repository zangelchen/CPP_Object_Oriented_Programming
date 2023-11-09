namespace uiuc {
  class Cube {
    private:                                                                    //attribute length 
      double length_;
      HSLAPixel color_;

    public:                                                                     //default constructor
      Cube(double length, HSLAPixel color);                                     //custom constructor                                 

      double getLength() const;                                                 //method getLength
      void setLength(double length);                                            //method setLength

      double getVolume() const;                                                 //method getVolume
      double getSurfaceArea() const;                                            //method getSurfaceArea


  };
}

namespace uiuc {
  class HSLAPixel {
  public:
    double h;                                                                    /**< Hue of the pixel, in degrees [0, 360). */                    
    double s;                                                                    /**< Saturation of the pixel, [0, 1]. */
    double l;                                                                    /**< Luminance of the pixel, [0, 1]. */
    double a;                                                                    /**< Alpha of the pixel, [0, 1]. */

    HSLAPixel();                                                                 //default pixel (opaque, white)
    
    HSLAPixel(double hue, double saturation, double luminance);                  //opaque pixel 

    HSLAPixel(double hue, double saturation, double luminance, double alpha);    //opaque pixedl with alpha too

    static HSLAPixel BLUE;
    static HSLAPixel ORANGE;
    static HSLAPixel YELLOW;
    static HSLAPixel PURPLE;

  };
}


class Game {    
  public:
    Game();                                                                      //default constructor
    void solve();                                                                //method 

    // An overloaded operator<<, allowing us to print the stack via `cout<<`:
    friend std::ostream& operator<<(std::ostream & os, const Game & game);

  private:
    std::vector<Stack> stacks_;
};

using uiuc::Cube;

class Stack {
  public:
    void push_back(const Cube & cube);
    Cube removeTop();
    Cube & peekTop();
    unsigned size() const;

    // An overloaded operator<<, allowing us to print the stack via `cout<<`:
    friend std::ostream& operator<<(std::ostream & os, const Stack & stack);

  private:
    std::vector<Cube> cubes_;
};
