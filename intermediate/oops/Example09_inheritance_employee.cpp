#include <iostream>
#include <stdio.h>

using std::endl;
using std::cout;
using std::cin;

/*base class*/
class EmpBasicInfo{
	protected:
		char name[20];
		int empID;
		char gender;
	public:
		void getInformation(void){
			cout << endl;
			cout << "Enter name :";
			cin.getline(name,30);
			cout << endl;
			
			cout << "Enter Emp ID. ";
			cin >> empID;
			cout << endl;
			
			cout << "Enter Gender ";
			cin >> gender;
			cout << endl;
		}
};
/*Another base class Dept Information*/
class deptInformation{
	protected:
		char deptName[30];
		char assignedWork[40];
		int time2complete;
	public:
		void getDeptInformation(void){
			cout << "Enter Department information ";
			cout << endl;
			cin.ignore(1);
			cin.getline(deptName,30);
			
			cout << "Enter assigned work";
			cout << endl;
			cin.ignore();
			cin.getline(assignedWork,40);
			
			cout << endl;
			cout << "Enter time to complete the task";
			cout << endl;
			cin >> time2complete;
		}
};

/*Final Derived Class*/
class Employee : private EmpBasicInfo , private deptInformation {
	public:
		void getEmployeeInformation(void){
			cout << "Enter employees basic information";
			cout << endl;
			getInformation();
			
			cout << endl;
			cout << "Enter employee's dept information";
			cout << endl;
			getDeptInformation();
		}
		
		void printEmployeeInfo(void){
			cout << "Empolyee;s information as follows ";
			cout << endl;
			
			cout << "--------------------------------";
			cout << endl;
			cout <<"Basic Information ";
			cout << name;
			
			cout << "Employee ID ";
			cout << empID;
			cout << endl;
			
			cout << "Gender ";
			cout << gender;
			cout << endl;
			
			cout << "----------------------------------";
			cout << endl;
			cout << "Department Information ";
			cout << endl;
			
			cout << "Department Name ";
			cout << endl;
			cout << deptName;
			
			cout << "Assigned Work: ";
			cout << endl;
			cout << assignedWork;
			
			cout << "Time to complete the task ";
			cout << endl;
			cout << time2complete;
		}
};

/*main function*/
int main(){
	
	//Create the employee class Object
	Employee emp;
	
	emp.getEmployeeInformation();
	emp.printEmployeeInfo();	
	return 0;
}
