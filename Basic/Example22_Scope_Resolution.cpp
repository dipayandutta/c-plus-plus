#include <iostream>

using std::cout;
using std::endl;

int count1 = 100;

int main(void){

	int count1 = 10;/*local value of count1*/
	int count2 = 20;

	cout << "Local Value of Count1 Variable is "<< count1;
	cout << endl;
	cout << "Global Value of Count1 Variable is "<< ::count1;
	cout << endl;

	{
		int count1 = 30;
		int count3 = 40;

		cout << "Value of Innter Count1 is "<< count1;
		cout << endl;
		cout << "value of Global Count1 is "<< ::count1;
		count2+= count3;
		cout << endl;
	}

	cout << endl;
	cout << "value of Outer Count1 variable is "<< ::count1;
	cout << endl;
	cout << "Value of Outer Count2 variable is "<< count2;
	cout << endl;

	return 0;
}
