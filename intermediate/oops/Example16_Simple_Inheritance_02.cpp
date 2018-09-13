#include <iostream>

using std::cout;
using std::endl;

class Car {
	public:
		Car(){
			cout << "Car class";
			cout << endl;
		}
		void BaseClass_function();
};


void Car::BaseClass_function(){
	cout << "Base Class function";
	cout << endl;
}

class Suzuki{
	public:
		Suzuki(){
			cout << "Suzuki class ...";
			cout << endl;
		}
};

class Maruti: public Car , public Suzuki{
	public:
		void print_msg();
};

void Maruti::print_msg(){
	cout << "Maruti Car";
	cout << endl;
}

int main(){
	
	Maruti car ;
	car.BaseClass_function();
	car.print_msg();
	
	return 0;
}
