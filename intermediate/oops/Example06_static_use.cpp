/*
 'static' is used to make access to any data variable or function without making an object of that class. It means that 'static' is used so that we can access any data variable or function without making an object of that class.
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Rectangle {
public :
    static void printArea(int l, int b){
        cout << l*b;
        cout << endl;
    }
    int number = 10;
    static int a;
};

int Rectangle::a = 100;
n
int main(){
    Rectangle::printArea(10,20);
    
    Rectangle rt ;
    cout << "Number "<<rt.number;
    cout << endl;
    
    cout << Rectangle::a;
    cout << endl;
    return 0;
}
