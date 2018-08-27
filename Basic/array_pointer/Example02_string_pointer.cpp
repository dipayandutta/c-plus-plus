#include <iostream>

using std::cout;
using std::endl;

const int MAX = 3;

int main(){

		const char *names[MAX] = {"Sachin","Sourav","Dhoni"};

		for (int i=0;i<MAX;i++){
						cout << (names+i)<<"  ===>  " << *(names+i);
						cout << endl;
				}
		return 0;
		}
