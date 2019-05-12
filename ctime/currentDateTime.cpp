#include<iostream>
#include<ctime>

using std::cout;
using std::endl;

int main(void){
  
  time_t now = time(0);

  /*convert now to string format*/
  char *dt = ctime(&now);

  cout << dt;
  cout << endl;

  /*convert now to tm struct for UTC*/
  tm *gmtm = gmtime(&now);
  dt = asctime(gmtm);
  cout << dt;
  cout << endl;
  return 0;
}
