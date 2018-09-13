#include <iostream>

using std::cout;
using std::endl;

class BaseClass {
	private:
		int number_one;
		int number_two;
		
	public:
		void print_msg();
		void get_numbers(int , int);
		void swap_function();
};

void BaseClass::print_msg(){
	
	cout << "=======================================";
	cout << endl;
	cout << "Class Example Code";
	cout << endl;
}
void BaseClass::get_numbers(int z , int x){
	
	number_one = z;
	number_two = x;
}

void BaseClass::swap_function(){
	
	cout << "Before Swap numbers are";
	cout << endl;
	cout << "First Number = "<<number_one;
	cout << endl;
	cout <<"Second number "<< number_two;
	cout << endl;
	
	int temp ;
	
	temp = number_one ;
	number_one = number_two;
	number_two = temp ;
	
	cout << "After Swapping ";
	cout << endl;
	cout << "First Number = "<<number_one;
	cout << endl;
	cout <<"Second number "<< number_two;
	cout << endl;
		
}

//main function
int main(){
	
	BaseClass object ;
	
	object.print_msg();
	object.get_numbers(10,40);
	object.swap_function();
	
	return 0;
}
