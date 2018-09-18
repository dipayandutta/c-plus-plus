#include <iostream>

using std::cout;
using std::cin;
using std::endl;


const int LEN = 80 ;

class employee{
	private:
		char name[LEN]; //character array to hold the names of the employee
		unsigned long number;
	public:
		void getdata(){
			cout << "Enter name of the employee";
			cin >> name;
			cout << "Enter number";
			cin >> number;
		}
		
		void putdata(){
			cout << "name "<<name;
			cout << "Number "<< number;
		}
};

/*Manager Class*/
class Manager:public employee{
	private:
		char title[LEN];
		double dues;
	public:
		void getdata(){
			employee::getdata();
			cout << "Enter title ";
			cout << endl;
			cin >>title;
			
			cout << "Enter Dues";
			cout << endl;
			cin >> dues;
		}
		void putdata() {
			employee::putdata();
			cout << "Title : "<<title;
			cout << endl;
			cout << "Dues : "<<dues;
			cout << endl;
		}
};

/*Scientist class*/
class Scientist:public employee{
	private:
		int pubs;
	public:
		void getdata(){
			employee::getdata();
			cout << endl;
			cout << "Enter number of pubs ";
			cin >> pubs;
		}
		void putdata() {
			employee::putdata();
			cout << "Number of publications "<< pubs;
			cout << endl;
		}
};

int main(){
	
	Manager james,jane;
	Scientist dipayan;
	
	cout << endl;
	cout << "Enter data for manager james ";
	james.getdata();
	
	
	return 0;
}
