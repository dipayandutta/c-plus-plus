/*Comparison using lambda*/

#include <iostream>


using std::cin;
using std::cout;
using std::endl;

int main(){
		
				int first_number;
				int second_number;

				cout << "Please enter the first number";
				cout << endl;
				cin >> first_number;

				cout << "Please enter the second number";
				cout << endl;
				cin >> second_number;

				/*All the local variable are declared in the surronding are accessable*/
				auto result = [=](int a,int b)->int{
										int biggest;
										if(a==b){
														biggest = a;
														cout << "Both input are same";
														cout << endl;
												}
										else if (a>b){
														biggest = a;
														cout << "First Number is biggest";
														cout << endl;
												}
										else {
														biggest = b;
														cout << "Second number is biggest";
														cout << endl;
												}
										return biggest;
						};

				cout << "Biggest number is "<<result(first_number,second_number);
				cout << endl;

				return 0;
		}
