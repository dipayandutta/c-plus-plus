/*
C++ allows operations with pointers to functions. The typical use of this is for passing a function as an argument to another function. Pointers to functions are declared with the same syntax as a regular function declaration, except that the name of the function is enclosed between parentheses () and an asterisk (*) is inserted before the name:
source :- http://www.cplusplus.com/doc/tutorial/pointers/
*/

#include <iostream>

using std::endl;
using std::cout;

int addition(int a , int b){
		return a+b;
		}

int multiplication(int a , int b){
		return a*b;
		}

int subtraction(int a , int b){
		if(a>b)
				return a-b;
		else
				return b-a;
		}

int operation(int x , int y , int (*function_to_preform)(int , int)){
				int g;
				g = (*function_to_preform)(x,y);
				return g;
		}

int main(){
				int add, sub , mul;
				/*multi is a pointer to a function that has two parameters of type int
				 It is directly initialized to point to the function multiplication
				*/
				int (*multi)(int,int) = multiplication;
				
				add = operation(10,20,addition);
				cout << add;
				cout << endl;

				sub = operation(10,20,subtraction);
				cout << sub;
				cout << endl;

				mul = operation(10,20,multi);
				cout << mul;
				cout << endl;

				return 0;
		}
