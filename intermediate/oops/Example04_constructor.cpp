#include<iostream>

using std::cout;
using std::cin;
using std::endl;

class Rectangle {
    
public:
    int length;
    int breadth;
    Rectangle(){
        length = 10;
        breadth = 90;
    }
};

int main(){
    
    Rectangle rect;
    cout << rect.length ;
    cout << endl;
    cout << rect.breadth;
    cout << endl;
    
    return 0;
}
