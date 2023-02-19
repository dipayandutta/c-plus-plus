#include <iostream>
using namespace std;

class Operate {
	public:
		//member function
		void fun();
};
//defination of member function outside the class
void Operate::fun(){
	cout << "This is the member function" << endl;
}

int main(){
	//creation of object 
	Operate op;
	op.fun(); //calling member function
	return 0;
}
