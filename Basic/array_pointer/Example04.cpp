#include <iostream>

using std::endl;
using std::cout;

int main(){
		
		int numbers[5]={0,0,0,0,0};
		int *p;
		
		p = numbers;
		cout << "Current address of p is ==> "<< p;
		cout << endl;
		cout << "Current Value of p is ===> "<< *p;
		cout << endl;
		*p=10;
		cout<< "Now the value of p is ===> "<<*p;
		cout << endl;

		p = &numbers[2];
		cout << "value at the array position 2nd is ==> "<< *p;
		cout << endl;

		*p=30;
		cout << "Now the value of p is  ==> "<< *p;
		cout << endl;
		return 0;
		}

/*
*p++   // same as *(p++): increment pointer, and dereference unincremented address
*++p   // same as *(++p): increment pointer, and dereference incremented address
++*p   // same as ++(*p): dereference pointer, and increment the value it points to
(*p)++ // dereference pointer, and post-increment the value it points to 

	

*/
