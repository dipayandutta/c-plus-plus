#include <iostream>

using std::cout;
using std::endl;
using std::cin;


class Employee {
  private:
    char *names;
    int empID;

   public:
    Employee(char *name,int id){
      this->names  = name;
      this->empID = id;
    }

  void printName(){
    // Coverting char [] to string
    std::cout << std::string(names);
    cout << endl;
  }

  void printID(){
    cout << empID;
    cout << endl;

  }
};


int main(void){

  char name[20];
  int id;

  cout << "Enter employee name ";
  cin.getline(name,30);
  cout << endl;

  cout << "Enter Employee ID ";
  cin >> id;

  // pass the values using constructor
  Employee steve(name,id);

  steve.printName();
  steve.printID();

 return 0;
}
