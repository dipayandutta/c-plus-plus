#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void){

  char grade;

  cout << "Enter Grade";
  cout << endl;
  cin >> grade;

  switch(grade){
    case 'A':
      cout << "Excellent";
      cout << endl;
      break;
    case 'B':
      cout << "Ok OK ";
      cout << endl;
      break;
    case 'C':
      cout << "Bad";
      cout << endl;
      break;

    default:
      cout << "Not in the list";
      cout << endl;
  }
  return 0;
}
