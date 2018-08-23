/*Capturing by reference*/

#include <iostream>

using std::cout;
using std::endl;

int main(){
		
				int id=4000;
				auto result = [&id](int n){id+=n; return id;};
				cout << "Result of Caputre by reference is ==> "<< result(10);
				cout << endl;

				return 0;
		}
