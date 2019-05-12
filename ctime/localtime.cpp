#include <iostream>
#include <ctime>

using std::endl;
using std::cout;

int main(void){
  
  time_t current_time ;
  current_time = time(NULL);

  tm *tm_local = localtime(&current_time);
  int hour = tm_local->tm_hour;
  int min  = tm_local->tm_min;
  int sec  = tm_local->tm_sec;

  cout << "Current Hour "<<hour;
  cout << endl;
  cout << "Current Minute" << min;
  cout << endl;
  cout << "Current Second "<< sec;
  cout << endl;
  return 0;
}
