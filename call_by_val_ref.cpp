#include <iostream>

using std::cout;
using std::endl;
using std::cin;

void do_stuff(int parameterOne , int& parameterTwo);

int main(void)
{
  int firstNumber;
  int secondNumber ;

  firstNumber = 10;
  secondNumber= 20;
  cout << "Before the function calling"<< endl;
  cout << endl;
  cout << firstNumber << "First Number";
  cout << endl;
  cout << "Second Number " << secondNumber;
  cout << endl;
  /*function calling*/
  do_stuff(firstNumber , secondNumber);
  cout << "First parameter after function call "<< firstNumber;
  cout << endl;
  cout << "Second paramenter after function call "<< secondNumber;
  cout << endl;
  return 0;
}

void do_stuff(int parameterOne,int& parameterTwo)
{
  parameterOne = 100;
  cout << "In function call"<< endl;
  cout << "First parameter "<< parameterOne << endl;

  parameterTwo = 200;
  cout << "Second Parameter "<< parameterTwo << endl;
  cout << endl;

}
