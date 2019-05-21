#include <iostream>

using std::endl;
using std::cout;
using std::cin;

/*function declearatio*/
void getNumbers(int& numberOne, int& numberTwo);
void swapNumbers(int& numberOne , int& numberTwo);
void showNumbers(int resultOne , int resutlTwo);

/*main function*/
int main(void)
{

  int firstNumber   = 0;
  int secondNumber  = 0;

  /*function calling*/
  getNumbers(firstNumber, secondNumber);
  swapNumbers(firstNumber , secondNumber);
  showNumbers(firstNumber, secondNumber);

  return 0;
}
/*function defination starts from here*/
void getNumbers(int& firstNumber, int& secondNumber)
{
  cout << "Enter Two integers"<< endl;
  cin >> firstNumber;
  cin >> secondNumber;
}

void swapNumbers(int& firstNumber , int& secondNumber)
{
  int temp;
  temp            = firstNumber;
  firstNumber     = secondNumber;
  secondNumber    = temp;
}

void showNumbers(int firstNumber , int secondNumber)
{

  cout << firstNumber;
  cout << endl;
  cout << secondNumber;
  cout << endl;
}
