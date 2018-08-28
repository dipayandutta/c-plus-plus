#include <iostream>

using std::endl;
using std::cout;

/*Function Declearation*/
void square(int &);

/*main Function starts from here*/
int main(){
    
    int number = 10;
    square(number);
    
    return 0;
}

/*Function Defination*/
void square(int & number){
    
    int result = number*number;
    cout << "Number"<<number;
    cout << endl;
    cout << "Square of the number "<< number << "is ==> "<< result;
    cout << endl;
    
}
