#include <iostream>

using std::cout;
using std::endl;
using std::cin;

class integer {
	int m,n;
	public:
		integer(int , int); //parameterized constructor
		
		print_msg();
		
		object_detection(integer);
		
		void display(void){
			cout << "m = "<<m;
			cout << "n = "<<n;
		}
};

integer :: integer(int x , int y){
	m = x;
	n = y;
}

integer::print_msg(){
	cout << "Message ... ";
	cout << endl;
}

integer::object_detection(integer object){
	cout << object.m;
	cout << endl;
	cout << object.n;
	cout << endl;
}
int main(){
	
	integer object_one(10,200);
	
	integer object_two = integer(39,2);
	
	object_one.object_detection(object_one);
	object_one.print_msg();
	object_one.display();
	
	object_two.object_detection(object_two);
	object_two.print_msg();
	object_two.display();
	
	
	return 0;
	
}
