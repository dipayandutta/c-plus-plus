#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

string message("OOPS Example "),line(40,'-');

class Rectangle{
  
public:
    int length;
    int breadth;
    
    /*Declaring member functions*/
    void setLength(int i);
    void setBreadth(int b);
    int getArea();
};

/*defining member function*/
void Rectangle::setLength(int l){
    length = l;
}

void Rectangle::setBreadth(int b){
    breadth = b;
}

int Rectangle::getArea(){
    
    int area;
    area = breadth*length;
    
    return area;
}

int main(){
    
    Rectangle rect;
    rect.setLength(10);
    rect.setBreadth(20);
    
    int result = rect.getArea();
    cout << message;
    cout << endl;
    
    cout << result;
    cout << endl;
    
    return 0;
    
}
