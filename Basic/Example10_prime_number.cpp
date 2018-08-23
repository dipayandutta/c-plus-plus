/*CCP programm to calculate the prime number*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
				
				unsigned long n,j;
				cout << "Enter a number";
				cout << endl;
				cin >> n;

				for(j<2;j<=n/2;++j){
								if(n%j == 0){
												cout << "It is not a prime number";
												cout << endl;
												break;
										}
				}
				cout <<"It is a prime number";

				cout << endl;
				cout << "Press enter to exit from the programm";
				cout << endl;
				cin.ignore();
				cin.ignore();

				return 0;
		}

