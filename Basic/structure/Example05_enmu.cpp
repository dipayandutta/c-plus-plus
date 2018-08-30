#include <iostream>

using std::endl;
using std::cout;
using std::cin;

enum days_of_week {Sun,Mon,Tues,Wed,Thrus,Fri,Sat};

int main(){
     days_of_week day1,day2;
     
     day1 = Mon;
     day2 = Thrus;

    int diff = day2 - day1;
    cout << "Days Between = "<< diff;
    cout << endl;
    if (day1>day2){
        cout << "Day1 comes before day2";
        cout << endl;
    }
    
    return 0;
}
