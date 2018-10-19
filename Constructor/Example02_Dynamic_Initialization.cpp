#include <iostream>

using std::cout;
using std::endl;

class Fixed_Deposit {
	
	long int principal_amount;
	int years;
	float rate;
	float return_value;
	
	public:
		Fixed_Deposit(){}
		Fixed_Deposit(long int p , int y , float r=0.12);
		Fixed_Deposit(long int p , int y , int r);
		void display(void);
};

Fixed_Deposite :: Fixed_Deposite(long int p, int y, float r = 0.12){
	
	principal_amount = p;
	years = y;
	rate = r;
	return_value = principal_amount;
	
	for(int i =1;i<=y;i++)
		return_value = return_value*(1.0+r);
}

Fixed_Deposite::Fixed_Deposite(long int p, int y , int r){
	
	principal_amount = p;
	years = y;
	return_value = principal_amount;
	rate = r;
	
	for(int i=1;i<=y;i++)
		return_value = return_value*(1.0+float(r)/100);
}

void Fixed_Deposite::display(void){
	cout << endl;
	cout << "Principal Amount "<< principal_amount;
	cout << endl;
	
}
