/*lambda function example with optional return type*/
/*in lambda funtion defination return type is optional*/
/*[clouse] (args) -> return_type {statement}*/

#include <iostream>

using std::cout;
using std::endl;

int main(){
				
				int number;
				number = 10;

				auto result = [] (int n)->int {
												int sum = 0;
												for(int i=0;i<n;i++){
														sum += i;
														}
								  cout << "Total sum "<< "\t" << sum;
									cout << endl;
									return 0;	
						};
				result(number);
				cout << endl;

				return 0;
		}
