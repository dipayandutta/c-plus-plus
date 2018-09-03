#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Rectangle{
    
public:
    int length;
    int breadth;
    
    int getArea(){
        int area;
        area = length * breadth;
        
        return area;
    }
};

int main(){
    
    Rectangle rect;
    rect.length = 10;
    rect.breadth = 30;
    
    int result = rect.getArea();
    
    cout << result;
    cout << endl;
}
