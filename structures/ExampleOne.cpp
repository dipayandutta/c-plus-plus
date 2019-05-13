#include<iostream>

using std::endl;
using std::cout;
using std::cin;

struct Person{
  char name[40];
  int age;
  float salary;
};

int main(void){

  Person james;

  cout << "Enter Full name of the Person";
  cout << endl;
  cin.getline(james.name,40);
  cout << endl;
  cout << "Enter age of the person";
  cout << endl;
  cin >> james.age;
  cout << "Enter Salary of the Person";
  cout << endl;
  cin >> james.salary;

  cout << "Display Information" << endl;
  cout << "Name "<< james.name;
  cout << endl;
  cout << "Age of the person " << james.age;
  cout << endl;
  cout << "Salary of the Person "<< james.salary;
  cout << endl;

  return 0;
}
