#include <iostream>

using std::cout;
using std::endl;

const int MAX = 3;

int main(){
		
		int array[MAX] = {12,23,34};
		int *pointer_to_array[MAX];

		for (int i=0;i<MAX;i++){
				pointer_to_array[i] = &array[i];
				}

		for (int i=0;i<MAX;i++){
						cout << "Value of" << i << "is ==>   " << *pointer_to_array[i];
						cout << endl;
				}

		return 0;

		}
