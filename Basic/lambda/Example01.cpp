/*lambda or Anonymous function examples in cpp*/

/*Synatx*/
/*[clousre] (args) {statement}*/

#include <iostream>

using std::cout;
using std::endl;

int main(){
				
				int a = 10;
				int b = 20;

				auto c = [](int i , int j) {int sum = i+j ; return sum;};
				cout << "lambda function Returns ==> "<<"\t"<< c(a,b);
				cout << endl;

				return 0;
		}
