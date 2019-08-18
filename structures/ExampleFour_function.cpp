#include <iostream>

struct Employee{
  short id;
  int age;
  double wage;
};

void printInformation(Employee); /*function declearation*/

/*function Defination*/
void printInformation(Employee emp){
  std::cout<< "Id :" << emp.id;
  std::cout << std::endl;

  std::cout << "Age :" << emp.age;
  std::cout << std::endl;

  std::cout << "wage "<< emp.wage;
  std::cout << std::endl;

}

int main(void){

  Employee mark = {1,30,12.3};
  Employee joe  = {2,40,45};

  printInformation(mark);
  std::cout << std::endl;
  printInformation(joe);
  return 0;
}
