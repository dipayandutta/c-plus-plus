#include <iostream>

using std::endl;
using std::cout;

/*Function Declearation*/
void square(int *);

/*main function starts from here*/
int main(){
    
    int number = 12;
    square(&number); //passing the address of the number variable
    return 0;
}

/*square function defination*/
void square(int *value){
    
    cout << "Current value "<< *value;
    cout << endl;
    int result = (*value)*(*value);
    cout << "After Square the value is "<< result;
    cout << endl;
}
