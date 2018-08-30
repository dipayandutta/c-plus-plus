#include <iostream>
#include <new>

using std::endl;
using std::cout;
using std::cin;
using std::nothrow;

int main(){
    
    int i ;
    int n ;
    int *p;
    
    cout << "Number of elements in the array ";
    cout << endl;
    cin >> i;
    
    p = new (nothrow)int[i];
    if (p == nullptr){
        cout << "Unable to allocate memory";
        cout << endl;
    }
    else{
        for (n=0;n<i;n++){
            cout << "Enter number ";
            cin >> p[n];
        }
        
        cout << "Numbers entered by you are";
        cout << endl;
        
        for (int n=0;n<i;n++){
            
            cout << n <<"th element of the array is ==> " <<p[n];
            cout << endl;
        }
        
        delete[] p; //delete the allocated memory after creation
        cout << "hit return to exit";
        cout << endl;
        
        cin.ignore();
        cin.ignore();
    }
    
    return 0;
}
