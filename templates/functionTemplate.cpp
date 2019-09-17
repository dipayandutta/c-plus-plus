#include <iostream>
#include <string>

using namespace std;

template <typename T> /*T is a name representating a type to be supplied later*/
inline T const& Max(T const& a, T const& b){
	return a < b ? b:a;
}

int main(void){
	int i = 10;
	int j = 20;

	cout << "MAX(i,j)"<< Max(i,j);
	cout << endl;

	double k = 10.21;
	double l = 11.00;

	cout << "MAC(k,l)"<< Max(k,l);
	cout << endl;

	string s1 = "Hello";
	string s2 = "World";

	cout << "MAX(s1,s2)"<< Max(s1,s1);
	cout << endl;

	return 0;
}
