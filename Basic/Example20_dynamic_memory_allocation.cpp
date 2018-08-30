#include <iostream>
#include <array>


using std::endl;
using std::cout;


/*Global pointers*/
int *p1 , *p2;

/*Function defination for memeory allocation*/
void allocation(){
    
    p1 = new int ; //Allocates memory
    *p1 =90 ; //assing a value at p1[0]
    *(p1+1) = 100;//assing a value to p1[1];
    *(p1+2) = 200;
    p2 = new int(99); // allocate and initialize 99 
}

/*array size finder function*/
void array_size(int *arr){
    
        int length = (sizeof(arr)/sizeof(*arr));
        cout << "Lenght of the array is "<< length;
        cout << endl;
        
    }

/*main fuction*/
int main(){
    
    /*calling the memory allocation function*/
    allocation();
    
    cout << "in the p1 array";
    cout << endl;
    cout << *p1;
    cout << endl;
    cout << "Array Element --> "<<p1[0];
    cout << endl;
    cout << "Array Element --> "<<p1[1];
    cout << endl;
    cout << "Array Element --> "<<p1[2];
    cout << endl;
    array_size(p1);
   
    
    cout << endl;
    
    
    cout << "in the p2 array";
    cout << endl;
    cout << *p2;
    cout << endl;
    cout << p2[0];
    cout << endl;
    array_size(p2);
    cout << endl;

    return 0;
}

