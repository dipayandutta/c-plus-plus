#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void){
	
	int number[40];
	int *ptr;
	int n;
	int i;
	
	cout << "Enter the count";
	cout << endl;
	
	cin >> n;
	
	cout << "Enter the numbers one by one";
	cout << endl;
	
	for(i=0;i<n;i++){
		cin >> number[i];
	}
	
	ptr = number;
	cout << number;
	cout << endl;
	cout << *number;
	
	int sum = 0;
	for(int i=0;i<n;i++){
		if(*ptr%2 == 0)
			sum += *ptr;
	}
	*ptr++;
	
	cout << "Sum of even numbers: "<< sum;
	return 0;
}
