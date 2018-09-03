#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Rectangle {
    
    int length;
    int breadth;
    
public:
    Rectangle(int l, int b){
        length = l;
        breadth = b;
    }
    int getArea(){
        int area;
        area = length * breadth;
        
        return area;
    }
};

int main(){
    
    Rectangle rect (10,29);
    
    cout << "Area"<< rect.getArea();
    cout << endl;
    
    return 0;
}
