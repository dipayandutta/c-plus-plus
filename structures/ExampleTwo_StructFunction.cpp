#include <iostream>

using std::cout;
using std::endl;
using std::cin;

struct Person {
  char name[50];
  int age;
  float salary;
};

void displayData(Person); /*Function Declearation*/

int main(void){
  
  Person james;

  cout << "Enter Full Name of the Person";
  cin.getline(james.name,50);
  cout << endl;
  cout << "Enter Age of   "<< james.name;
  cin >> james.age;
  cout << endl;

  cout << "Enter Salary of " << james.name;
  cin >> james.salary;
  cout << endl;

  displayData(james);
  return 0;
}

void displayData(Person james){

  cout << "Full Name of the person is "<< james.name;
  cout << endl;
  cout << "Age of " << james.name << "is " << james.age;
  cout << endl;
  cout << "Salaray of "<< james.name << "is " << james.salary;
  cout << endl;
}
