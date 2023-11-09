************************************ Derived Class ************************************

Base class is a generic form of a specialized, derived class 

//Shape.hpp
class Shape {                                          //basic things shared between many different shapes
  public:
    Shape();
    Shape(double width);
    double getWidth() const;

  private:
    double width_;
};

//Cube.hpp
namespace uiuc {
  class Cube : public Shape {                          //class Cube inherits the class Shape
    public:
      Cube(double width, uiuc::HSLAPixel color);       //items specific to the cube
      double getVolume() const;                        //don't need a "length" because it's already inherited from Shape class via "width"

    private:
      uiuc::HSLAPixel color_;
  };
}

************************************ Initialization ************************************

Base class must be initialized first before derived can be initialized

Cube must construct Shape
Custom constructor can be used with an initialization list (the syntax to initialize the base class ->  : Class (variable)
  1. initialize a base class 
  2. initialize the current class using another constructor 
  3. initialize the default values of member variables

//Cube.cpp
namespace uiuc {
  Cube::Cube(double width, uiuc::HSLAPixel color) : Shape(width) {      //Cube constructor takes in width and color by 1. initialize a generic Shape with a width ( :Shape(width))
    color_ = color;                                                     //then it takes on details of class Cube by making a cube and adding a color
  }

  double Cube::getVolume() const {                                      //width is private member of Shape class, so we need to use getWidth() because it's public.                      
    return getWidth() * getWidth() * getWidth();
  }
}

************************************ Initialization List ************************************

the syntax to initialize the base class ->  : Class (variable)

Shape::Shape() : Shape(1) {                       //Default constructor using the logic in one parameter of shape, want a width one shape
}

Shape::Shape(double width) : width_(width) {      //initialize the private member width_ with width
  // Nothing.
}

double Shape::getWidth() const {
  return width_;
}