#include <iostream>

using std::cout;
using std::cin;
using std::endl;

struct Distance{
    int feet;
    float inches;
};
struct Room {
    Distance length;
    Distance width;
};

int main(){
    
    Room dining;
    dining.length.feet = 10;
    dining.width.inches = 10.10;
    
    float result = dining.length.feet + dining.width.inches;
    cout << result;
    cout << endl;
    
    cout << "Press Enter to exit";
    cout << endl;
    
    cin.ignore();
    cin.ignore();
    
    return 0;
}
