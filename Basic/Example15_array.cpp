/*A simple and basic array Explanation programm*/

#include <iostream>

using std::cout;
using std::endl;

int main(){
		
		int array[] = {1,2,3,4,5};
		
		for(int i : array){
						cout << i<<"th element is "<< array[i];
						cout << endl;
				} 

		return 0;
		}
