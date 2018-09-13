#include <iostream>

using std::endl;
using std::cout;

class BaseClass {
	public :
		int BaseClass_variable;
};

class DerivedClass : public BaseClass {
	public:
		int DerivedClass_variable;
};


//main function 

int main(){
	
	DerivedClass DerivedClass_Object;
	
	DerivedClass_Object.BaseClass_variable = 10;
	DerivedClass_Object.DerivedClass_variable = 20;
	
	cout << "Base Class Variable Value = "<< DerivedClass_Object.BaseClass_variable;
	cout << endl;
	
	cout << "Derived Class Variable Value = "<< DerivedClass_Object.DerivedClass_variable;
	cout << endl;
	
	return 0;
}
