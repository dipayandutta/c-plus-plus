#include <iostream>

using std::endl;
using std::cout;

class integer{
	
	int n,m;
	public:
		integer(int , int);
		
		void display(void){
			cout << "M = "<< m;
			cout << endl;
			cout << "N = "<< n;
			cout << endl;
		}
		
};

integer::integer(int x , int y){
	m = x;
	n = y;
}

int  main(){
	
	integer int1(10,20); // constructor called implicitly
	integer int2 = integer(15,30); // explicit calling of constructor
	
	int1.display();
	int2.display();
	
	return 0;
}
