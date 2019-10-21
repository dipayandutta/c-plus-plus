#include <iostream>

using std::cout;
using std::endl;

int count = 0 ; //GLOBAL Variable

/*function calling*/
void test1(void);
void test2(void);

/*main function*/
int main(void){

	cout << "GLOBAL VARIABLE "<< count;
	cout << endl;
	int count = 0 ; /*local variable with the same name as the global variable*/
	for(;count<5;count++){
		test1();
		test2();
		
	}
	return 0;
}

/*function Defination*/
void test1(void){
	cout << "test1 Count ==> "<< ++count;
	cout << endl;
}
void test2(void){
	cout << "test2 Count ==> "<< ++count;
	cout << endl;
}
