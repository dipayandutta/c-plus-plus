/*Program to Calculate the fibbonacci Series number*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
	
		int n = 0;
		double prev1 = 1.0;
		double prev2 = 1.0;
		double current = 0.0;
		cout << "How many Fibbonacci numbers to generate ...";
		cout << endl;
		cin >> n;
		/*Set the 15 digits precession*/
		cout.precision(15);

		while(n>0){
				current = prev1 + prev2;
				prev2 = prev1;
				prev1 = current;
				cout << current << "\t";
				cout << "Ratio = " << prev1/prev2;
				cout << endl;
				--n;
			}
			cout << endl;
			cout << "Press Enter to Exit";
			cout << endl;
			cin.ignore();
			cin.ignore();

			return 0;
	}
