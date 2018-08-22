#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){
	
		double x = 0;
		double y = 0;

		/*Reading values of x and y from the userinput*/
		cout << "Value of X "<< endl;
		cin >> x;
		cout << "Value of y "<< endl;
		cin >> y;

		/*start the comparison*/
		if(x == y){
				cout << "Both x and y have the same value "<<x <<"=="<<y;
				cout << endl;
			}
		else if (x > y){
				cout << "X is greater than y "<<x <<">" <<y;
				cout << endl;
			}
		else {
				cout << "Y is greater that x"<<y <<">" <<x;
				cout << endl;
			}

		return 0;
	}
