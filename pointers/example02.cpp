#include <iostream>

using std::cout;
using std::endl;

int main(void){
	
	int number = 10;
	int *ptr;
	
	ptr = &number;
	
	cout << "The address of number variable is "<< &ptr;
	cout << endl;
	
	cout << "Value of number variable is "<< *ptr;
	cout << endl;
	
	(*ptr) = (*ptr)*2/6;
	cout << "Current value of variable is "<< (*ptr);
	cout << endl;
	
	return 0;
}
