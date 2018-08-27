#include <iostream>

using std::cout;
using std::endl;

/*function declearation*/
void print_array(int [],int );

int main(){
		
		int first_array[] = {5,12,3};
		int second_array[]= {10,12,3,45,12};

		/*function calling*/
		print_array(first_array,3);
		print_array(second_array,5);

		return 0;
		}

/*Function defination*/
void print_array(int array[],int length){
		
		for(int i=0;i<length;i++){
						cout << array[i];
						cout << endl;
				}
		}

