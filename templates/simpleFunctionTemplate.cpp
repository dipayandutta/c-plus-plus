#include <iostream>
#include <string>

using namespace std;

template <typename T> /*T is a name representating a type to be supplied later*/

/*The inline functions are a C++ enhancement feature to increase the execution time of a program.*/
inline T addition(T  a, T  b){
	return a +b ;
}

int main(void){
	int i = 10;
	int j = 20;

	cout << "addition(i,j)"<< addition(i,j);
	cout << endl;

	double k = 10.21;
	double l = 11.00;

	cout << "addition(k,l)"<< addition(k,l);
	cout << endl;

	string s1 = "Hello";
	string s2 = "World";

	cout << "addition(s1,s2)"<< addition(s1,s1);
	cout << endl;

	return 0;
}
