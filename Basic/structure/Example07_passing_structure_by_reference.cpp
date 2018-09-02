#include <iostream>

using std::endl;
using std::cout;
using std::cin;

// structure defination
struct Distance{
    int feet;
    float inches;
};
// function declearation
void scale(Distance& , float);
void show_disp(Distance);


int main(){
    Distance D1 = {10,10.32};
    Distance D2 = {20,20.43};
    
    cout << "D1 = ";
    show_disp(D1);
    cout << endl;
    cout << "D2 = ";
    show_disp(D2);
    cout << endl;
    
    scale(D1,0.5);
    scale(D2,0.7);
    
    cout << "D1 = ";
    show_disp(D1);
    cout << endl;
    cout << "D2 =" ;
    show_disp(D2);
    cout << endl;
    
    return 0;
    
}
void scale(Distance& DD , float number){
    
    float inches = (DD.feet*12 + DD.inches) * number;
    DD.feet = static_cast<int>(inches/12);
    DD.inches = inches - DD.feet * 12;
}

void show_disp(Distance DD){
    
    cout << DD.feet;
    cout << endl;
    cout << DD.inches;
    cout << endl;
}
