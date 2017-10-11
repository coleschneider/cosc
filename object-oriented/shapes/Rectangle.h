//This is the object's header file. Header files use use .h extension

class Rectangle {   //attributes are usually private. Methods are usually public
private:
    double _length; //length and width are called attributes
    double _width;  //the underscore is purely conventional
public: 
    Rectangle(double length, double width); //Rectangle is called a constructor
    //not undersocre because length and width here parameters
    //virtual ~Rectangle ();   //  ~Rectangle is the destructor. We dont need to know this YET
    double area();  
    double perimeter(); //area and perimeter are methods

};