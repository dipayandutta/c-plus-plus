#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;

int main(void){

  char answer;
 std::string name;

  do{
    cout << "Press Y for Continue";
    cout << endl;
    cin >> answer;
    cout << "Enter Name ";
    cout << endl;
    cin >> name;

    cout << "Hello "<< name;
    cout << endl;

  }while(answer=='y' || answer == 'Y');
  cout << "Exiting from the Program";
  cout << endl;

  return 0;
}
