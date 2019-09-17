#include <iostream>
#include <string>
#include "max.hpp"

using std::cout;
using std::endl;

int main(void){
	
	int i = 20;
	int j = 10;

	cout<<"Max between i and j is " << ::max(i,j)<<endl;
	cout << endl;

	double k = 19.12;
	double l = 99.12;

	cout << "Max between k and l is " << ::max(k,l)<< endl;
	cout << endl;

	return 0;
}

