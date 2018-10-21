#include <iostream>

using std::cout;
using std::endl;

int main(void){
	
	int a ;
	int *ptr1;
	int *ptr2;
	
	a = 11;

	ptr1 = &a;
	ptr2 = ptr1;
	
	
	cout << "The address of a is :"<<ptr1;
	cout << endl;
	cout << "Value of a is "<< *ptr1;
	cout << endl;
	cout << "The address of ptr1 is "<<ptr2;
	cout << endl;
	cout << "After incrementing the address values ";
	cout << endl;
	ptr1+=2;
	cout << "The address of a is "<<ptr1;
	cout << endl;
	
	cout << "Value of a is "<< *ptr1;
	cout << endl;
	return 0;
}
