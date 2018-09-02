#include <iostream>

using std::cout;
using std::endl;
using std::cin;

struct Distance{
    int feet;
    float inches;
};

void display(Distance *);

int main(){
    Distance ptr ;
          
    cout << "Enter Feet: ";
    cin >> ptr.feet;
    cout << endl;
    
    cout << "Enter inches :";
    cin >> ptr.inches;
    cout << endl;
    
//     cout << ptr.feet;
//    cout << ptr.inches;
    display(&ptr);
    
    return 0;
    
}

void display(Distance *pointer){
    
    cout << "Display information ";
    cout << endl;
    cout << "Distance = "<< pointer->feet;
    cout << endl;
}
