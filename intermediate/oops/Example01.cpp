#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

/*Class Declearation*/
class Circle{

private:
    double radius;
    string color;
    
public:
    /*Constructor with default values of data member*/
    Circle(double r=1.0,string c= "red"){
        radius = r;
        color  = c;
    }
    /*Member function*/
    double getRadius(){
        return radius;
    }
    string getColor(){
        return color;
    }
    double getArea(){
        return radius*radius*3.14;
    }
        
};
/*main function*/
int main(){
    
    Circle c1(1.2,"Blue");
    cout << "Radius = "<< c1.getRadius() << "Area ="<<c1.getArea() << "Color ="<< c1.getColor();
    cout << endl;

    Circle c2(10,"Green");
    cout << "Radius = "<< c2.getRadius() << "Area ="<< c2.getArea() << "Color = "<< c2.getColor();
    cout << endl;
}
