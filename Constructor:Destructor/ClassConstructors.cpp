/*
AUTOMATIC DEFUALT CONSTRUCTOR:
- System has a default constructor if none is defined                               */

/*
CUSTOM DEFAULT CONSTRUCTOR
- specifies the state of the object when the object is constructed
- Three parts
    1. member function with same name of the class
    2. Function takes zero parameters
    3. Function does not have a return type*/
    
class Cube{
    public:
        Cube() {length_=1;}                      //-> everything defaults to length of 1, a unit cube  
        double getVolume();
        double getSurfaceArea();
}

int main(){
    uiuc:: Cube c;                               //-> can just be c
}
/* 
CUSTOM CONSTRUCTORS
- has arguments inside the parentheses
- one argument constructor has to have a main with defined value */ 
    
class Cube{
    public:
        Cube(double length) {length_=length;}    //-> argument inside parentheses
        double getVolume();
        double getSurfaceArea();
}

int main(){    
    uiuc:: Cube c(4);                             //-> CANNOT be just Cube c
}