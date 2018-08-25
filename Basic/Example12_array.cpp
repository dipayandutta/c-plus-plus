#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::setw;

int main(){
		
		int n[10]; /*n is an array of 10 integers*/
		
		/*Initialize all the elements of the array with 1*/
		for(int i=0;i<10;i++){
						n[i] = 1;
				}

		cout << "Element " << setw(10) << "Value";
		cout << endl;
		/*Print all the elements in the array*/
		for(int i=0;i<10;i++){
						cout << i <<"th Element is = "<<n[i];
						cout << endl;
				}
		return 0;
		}

