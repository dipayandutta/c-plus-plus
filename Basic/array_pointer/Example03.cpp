#include <iostream>

using std::endl;
using std::cout;

const int MAX = 3;

/*Function Declearation*/
void print_function(int *);

/*main function*/
int main(){
		
				int array[] = {10,20,30};
				/*function calling*/
				print_function(array);

				return 0;
}

/*Function Defination*/
void print_function(int *array){
		
		for(int i=0;i<MAX;i++){
				cout << *(array+i);
				cout << endl;
				}
		}
