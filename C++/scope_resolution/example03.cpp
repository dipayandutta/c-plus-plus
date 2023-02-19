#include <iostream>
using namespace std;

class ABC{
	public:
	//decleare static memner 
	static int fun(){
		int number;
		number = 07;
		cout << number << endl;
	}
	int func1(); //declearation
};

// define the fun1 member function
int ABC::func1(){

	cout << "This is the function1 member function" << endl;
	return 10;
}

//main function
int main(){
	//calling the member function without creation of object
	ABC::fun();
	ABC abc;
	int result = abc.func1();
	cout << result<<endl;
	return 0;
}

