#include <iostream>

using std::endl;
using std::cout;
using std::cin;

struct Distance{
    int feet;
    float inches;
};

int main(){
    Distance  D2 ;
    Distance D3;
    
    D2.feet = 10;
    D2.inches = 11.29;
    
    if (D2.inches > 10){
        D3.inches = D2.inches + 9;
        cout << "Inches "<< D3.inches;
        cout << endl;
    }
    else{
    
        D3.inches = D2.inches - 10;
        cout << "Inches "<< D3.inches;
        cout << endl;
    }
    int result = D2.inches + D2.feet;
    cout << endl;
    cout << "Result -> "<< result;
    cout << endl;
    
    cout <<"Press enter to exit ";
    cout << endl;
    cin.ignore();
    cin.ignore();
    
    return 0;
}
