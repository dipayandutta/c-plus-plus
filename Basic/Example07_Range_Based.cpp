/*Example of Range Based*/

#include <iostream>

using std::cout;
using std::endl;

int main(){
		
		int my_array[10] = {1,22,13,434,4,6,7,7,90,10};
		for(int i:my_array){
			cout << i;
			cout << endl;
			}
		return 0;
	}
