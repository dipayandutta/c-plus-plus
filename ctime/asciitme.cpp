#include <iostream>
#include <ctime>

using std::endl;
using std::cout;

int main(void){

  time_t current_time;

  time(&current_time);
  cout << asctime(localtime(&current_time));
  cout << endl;
  return 0;
}
