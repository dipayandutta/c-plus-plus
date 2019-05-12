#include <iostream>
#include <ctime>

using std::cout;
using std::endl;

int main(void){

  time_t current_time;

  current_time = time(NULL);
  cout << current_time << "seconds has passed sience epoch";
  cout << endl;
  return 0;
}
