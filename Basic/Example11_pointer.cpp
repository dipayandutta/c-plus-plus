#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
		
		int i = 10;
		int *p;

		p = &i;

		cout << "Value of i is = "<< i;
		cout << endl;
		cout << "Value of p is =" << *p;
		cout << endl;
		cout << "Address of p is = "<<p;
		cout << endl;
		cout << "Address of i is = "<< &p;
		cout << endl;

		return 0;
		}
