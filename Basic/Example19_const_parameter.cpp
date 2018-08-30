/*
    Test function const and non-const parameter
 */

#include <iostream>

using std::endl;
using std::cout;

/*Function Declearation*/
int squareConst(const int);
int squareNonConst(int );
int squareConsRef(const int &);
int squareNonConstRef(int &);

/*main function starts from here*/
int main(){
    
    int number = 10;
    const int constNumber = 12;
    
    cout << squareConst(number);
    cout << endl;
    cout << squareConst(constNumber);
    cout << endl;
    
    cout << squareNonConst(number);
    cout << endl;
    cout << squareNonConst(constNumber);
    cout << endl;
    
    cout << squareConsRef(number);
    cout << endl;
    cout << squareConsRef(constNumber);
    cout << endl;
    
    cout << squareNonConstRef(number);
    cout << endl;
    
}

int squareConst(const int number){
    return number*number;
}

int squareNonConst(int number){
    number *= number;
    return number;
}

int squareConsRef(const int & number){
    return number*number;
}

int squareNonConstRef(int & number){
    return number*number;
}
