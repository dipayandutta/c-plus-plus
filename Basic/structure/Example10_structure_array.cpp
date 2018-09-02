#include <string>
#include <iostream>


using std::cout;
using std::cin;
using std::endl;
using std::string;

struct student{
    int roll;
    string name;
    int phone_number;
};

int main(){
    
    struct student std[5]; /*Array of structure values*/
  
    for(int i=0;i<2;i++){
        cout << "student "<< i+1 ;
        cout << endl;
        cout <<"Enter roll number";
        cout << endl;
        cin >> std[i].roll;
        
        cout << "Enter name ";
        cout << endl;
        cin >> std[i].name;
        
        cout << "Enter phone number";
        cout << endl;
        cin >> std[i].phone_number;
    }
    
    /*Displaying the structure variable values*/
    for(int i =0;i<2;i++){
        cout << "Roll number";
        cout << std[i].roll;
        cout << endl;
        
        cout << "Students Name";
        cout << std[i].name;
        cout << endl;
        
        cout << "Contact Number";
        cout << std[i].phone_number;
        cout << endl;
    }
    
    return 0;
}
