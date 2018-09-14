#include <iostream>

using std::endl;
using std::cout;

class Test{
	private:
		int count;
	public:
		Test(): count(10){
		}
		void operator ++(){
			count +=1;
		}
		void Display();
};

void Test::Display(){
	cout <<"Current Value of Count is = "<<count;
	cout << endl;
}

int main(){
	Test object;
	++object;
	object.Display();
	
	return 0;
}
