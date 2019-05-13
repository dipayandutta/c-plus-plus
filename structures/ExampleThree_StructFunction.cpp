#include <iostream>

using std::cout;
using std::cin;
using std::endl;

struct Person {
  char name[50];
  int age;
  float Salary;
};

/*Function Declearation for getting and display*/
void getData(Person);
void displayData (Person);

int main(void){

  /*Creating a structure object*/
  Person p1;
  /*function calling*/
  getData(p1);
  displayData(p1);

  return 0;
}
/*Function Defination */
void getData(Person james){
  cout << "Enter full name of the Person ";
  cin.getline(james.name,50);
  cout << endl;

  cout << "Enter age of the person ";
  cin >> james.age;
  cout << endl;

  cout << "Enter the salary of the Person ";
  cin >> james.Salary;
  cout << endl;

}
/*display data function defination*/
void displayData(Person james){
    cout << endl;

    cout << "Name of ther Person is ";
    cout << james.name;
    cout << endl;

    cout << "Age of the Person is ";
    cout << james.age;
    cout << endl;

    cout << "Salary of the Person is ";
    cout << james.Salary;
    cout << endl;
}
