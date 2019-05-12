#include<iostream>
#include<ctime>

using std::endl;
using std::cout;

int main(void){

  time_t tim;
  tm *ptr;

  int y = 2017;
  int m = 4;
  int d = 20;

  char weekday[7][20] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

  time(&tim);
  ptr =localtime(&tim);

  ptr->tm_year = y -1990;
  ptr->tm_mon  = m -1;
  ptr->tm_mday = d;

  mktime(ptr);
  cout << weekday[ptr->tm_wday];
  return 0;
}
