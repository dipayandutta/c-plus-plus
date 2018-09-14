#include <iostream>
#include <cmath>

#define PI 3.14159265

using std::cout;
using std::endl;

class Acos{
	private:
		int number;
	public:
		void setNumber(double);
		void showNumber();
		void acos_demo();		
};

void Acos::setNumber(double x){
	number = x ;
}

void Acos::showNumber(){
	cout << "Number Previously";
	cout << endl;
	cout << number;
	cout << endl;
}

void Acos::acos_demo(){
	double result;
	result = acos(number) * 180 /PI;
	cout << "The arc cosine of %f is %f degrees."<<number;
	cout <<endl;
	cout << result;
		
}

int main(){
	Acos arc_cos;
	arc_cos.setNumber(30.5);
	arc_cos.showNumber();
	arc_cos.acos_demo();
	
	return 0;
}
