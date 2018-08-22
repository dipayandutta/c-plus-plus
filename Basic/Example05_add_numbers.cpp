/*add all the numbers*/
/*number adding ends if find a 0 or any character*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
	
	int sum=0;
	int n = 1;
	cout << "Enter numbers , Terminate with a 0";
	cout << endl;
	while(n !=0){
			cin >> n;
			if (!cin){ //If read failed
					n=0;
				}
			sum += n;
		}
		cout << "Total is => "<< sum << endl;
		cout << "Press ENTER to exit"<< endl;
		cin.ignore();
		cin.ignore();

		return 0;
	}


