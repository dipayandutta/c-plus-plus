#include <iostream>
#include "add_header.h"

using std::cout;
using std::endl;

int main(){
	
	cout << "Multifile program example in C++";
	cout << endl;
	
	int result = add(10,20);
	cout << "Result of the addition is ";
	cout << endl;
	cout << result;
	cout << endl;
	
	return 0;
}
