#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void){

  int sum = 0;

  for(int i=0;i<=10;i++){
    if(i%2==0){
      sum += i;
    }
  }
  cout << sum;
  cout << endl;
  return 0;
}
