#include <iostream>
#include "array_sum.hpp"

using std::endl;
using std::cout;

int main(void){
	int a[4] = {1,2,34,4};
	float b[4] = {1.2,33,4.2,22.1};

	cout << "Array Sum in integer "<< ::sum(a,4);
	cout << endl;

	cout << "Array Sum in float "<< ::sum(b,4);
	cout << endl;

	return 0;
}
