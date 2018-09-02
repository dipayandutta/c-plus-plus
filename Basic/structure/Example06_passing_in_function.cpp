#include <iostream>

using std::cout;
using std::endl;
using std::cin;

struct Distance{
    int feet;
    float inches;
};

// function declearation
void function_struct(Distance); 

int main (){

    Distance D1;
    
    cout << "Enter feet";
    cout << endl;
    cin >> D1.feet;
    
    cout << "Enter inches";
    cout << endl;
    cin >> D1.inches;
    
    function_struct(D1);
    
    return 0;
}
//  function deincation
void function_struct(Distance distance){

    
    cout << "Distance in feet "<<distance.feet;
    cout << endl;
    cout << "Distance in inches "<< distance.inches;
    cout << endl; 
}
