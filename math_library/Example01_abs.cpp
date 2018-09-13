#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

class Absolute{
	private:
		int number;
	public:
		void setNumber(int );
		void showNumber();
		void abs_demo();
};


void Absolute::setNumber(int x){
	number = x;
}

void Absolute::showNumber(){
	cout << "Number Previously ";
	cout << endl;
	cout << number;
	cout << endl;
}

void Absolute::abs_demo(){
	int result ;
	result = abs(number);
	cout << "After abs() function call";
	cout << endl;
	cout << result;
	cout << endl;
	
}

int main(){
	
	Absolute abs;
	abs.setNumber(-10);
	abs.showNumber();
	abs.abs_demo();
	
	return 0;
}
