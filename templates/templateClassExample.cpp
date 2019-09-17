#include <iostream>

using namespace std;

template <class any_data_type>

class Test {
	
	public:
		// constructor
		Test();
		//destructor
		~Test();
		//method
		any_data_type Data(any_data_type);
};

template <class any_data_type>
any_data_type Test<any_data_type>::Data(any_data_type var0){
	return var0;
}

//Constructor
template <class any_data_type>
Test <any_data_type>::Test()
{
	cout << "Constructor allocated ...";
	cout << endl;
}
//Desctructor
template <class any_data_type>
Test<any_data_type>::~Test(){
	cout << "Destruct , disallocated ";
	cout << endl;
}

//main function
int main(void){
	Test<int> var1;
	Test<double> var2;
	Test<char> var3;
	Test<char*> var4;

	cout << "Var1,int data type "<<endl;
	cout << var1.Data(100)<<endl;

	cout << "var2,double "<< endl;
	cout << var2.Data(120.21)<<endl;

	cout << "Var3 , Char "<< endl;
	cout << var3.Data('C')<<endl;

	cout << "Var4, Char Pointer "<< endl;
	cout << var4.Data("The C++ Class Template Example")<<endl;

	return 0;
}
