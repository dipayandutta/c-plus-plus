#include <iostream>

using std::cout;
using std::endl;

/*function declearation*/
void getNumber(int& numberOne , int& numberTwo);
void displayNumber(int numberOne , int numberTwo);
void swapValues(int& numberOne , int& numberTwo);
void order(int& numberOne , int& numberTwo);

/*main function*/

int main(void)
{
  int firstNumber ;
  int secondNumber ;

  /*function calling*/
  getNumber(firstNumber , secondNumber);
  displayNumber(firstNumber , secondNumber);
  order(firstNumber ,secondNumber);

  return 0;
}

/*function defination*/
void getNumber(int& numberOne , int& numberTwo)
{

  cout << "Enter two integeres";
  cout << endl;
  std::cin >> numberOne;
  std::cin >> numberTwo;
}

/*
void displayNumber(int numberOne , int numberTwo)
{

  cout <<"First Number is "<< numberOne;
  cout <<"Second NUmber is " << numberTwo;
}
*/
void order(int& numberOne , int& numberTwo)
{

  if(numberOne > numberTwo)
  {
    swapValues(numberOne , numberTwo);
  }
}
void swapValues(int& numberOne , int& numberTwo)
{
  int temp;
  temp      = numberOne;
  numberOne = numberTwo;
  numberTwo = temp;
}
void displayNumber(int numberOne , int numberTwo)
{

  cout <<"First Number is "<< numberOne;
  cout <<"Second NUmber is " << numberTwo;
}
