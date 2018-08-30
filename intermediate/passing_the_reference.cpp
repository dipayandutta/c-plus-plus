/*program to pass the return-value as reference or pointer*/
#include <iostream>

using std::endl;
using std::cout;

/*Function Declearation*/
int & squareRef(int &);
int * squrePtr(int *);

/*main functions starts from here*/
int main(){
    
    int number_first = 10;
    cout << "Address of the variable In main "<< &number_first;
    cout << endl;
    
    int &result = squareRef(number_first);
    cout << "Result "<< result ;
    cout << endl;
    
    
    int number_second = 20;
    cout << "In main the second number variable address is "<< &number_second;
    cout << endl;
    
    int *ptrResult = squrePtr(&number_second);
    cout << "Result "<< *ptrResult;
    cout << endl;

    return 0;
}

/*Function Defination*/
int & squareRef(int & number){
    
    cout << "IN squareRef function variable address is "<<&number;
    cout << endl;
    
    number *= number;
    return number;
}

int * squrePtr(int * number){
    
    cout << "Inside the square Ptr function variable address is  "<< number ;
    cout << endl;
    
    *number *= *number;
    return number;
}
