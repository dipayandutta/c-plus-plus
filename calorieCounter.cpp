#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void){

  int number_of_items;
  int count;
  int calories_for_item;
  int total_calories;

  cout << "Enter How many items";
  cout << endl;
  cin  >> number_of_items;
/*Calculating the Total Value of the Calories Intake*/
  total_calories = 0;
  count = 1;

  while(count <= number_of_items){
    cin >> calories_for_item;
    total_calories = total_calories + calories_for_item;
    count+=1;
  }

  cout << "Total Calories at the end of the day "<< total_calories;
  cout << endl;

  return 0;
}
