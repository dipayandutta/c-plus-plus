#include <iostream>

using std::endl;
using std::cout;

/*Function Declearation*/
void print_previous(int *);
void increment_all(int *, int *);
void print_all(const int *,const int *);

/*main function*/
int main(){
		
		int numbers[] = {9,11,34};
		/*Function calling*/
		print_previous(numbers);
		increment_all(numbers,numbers+3);
		print_all(numbers,numbers+3);

		return 0;
		}


/*Function defination for increment function*/

void print_previous(int *array){
		cout << "Previous value of the array elements";
		cout << endl;
		for(int i=0;i<3;i++){
						cout << *(array+i);
						cout << endl;
				}

		cout << endl;
		}
void increment_all(int *start , int *stop){
		
		int *current = start;
		while(current != stop){
						++(*current); /*increment the value pointer*/
						++current;   /*increment the pointer*/
				}
		}

/*function defination for print all function*/
void print_all(const int * start, const int * end){
		
				const int *current = start;
				/*printing current values of the array elements*/
				cout << "Current values of the array elements";
				cout << endl;
				cout << endl;
				while(current != end){
								cout << *current << endl;
								++current ; /*increment the pointer*/
						}
		}
