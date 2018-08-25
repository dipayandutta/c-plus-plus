#include <iostream>

using std::cout;
using std::endl;

/*Function declearation*/
void double_value(int *);

/*main function starts from here*/
int main(){
		
		int i = 2;

		/*Calling the function*/
		double_value(&i);
		
		return 0;
		}

/*Function Defination*/
void double_value(int *p){
		
		int result;
		result = *p * 2;

		cout << "Result is "<< result;
		cout << endl;


		}
