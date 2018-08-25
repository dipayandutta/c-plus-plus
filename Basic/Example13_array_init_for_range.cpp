#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::setw;

int main(){
		
		int n[10];/*array name n with 10 integers to store*/

		/*Array initialization*/
		int i = 0;
		for(auto &x : n){
						x =1;
						i++;
				}

		cout << "Element" << setw(12) << "Value";
		cout << endl;
		
		/*Display array elements*/
		for(int i : n){
						cout << i<<"th Element is "<< n[i];
						cout << endl;
				}
		
		return 0;
}

