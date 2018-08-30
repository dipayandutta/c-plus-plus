#include <iostream>

using std::cout;
using std::cin;
using std::endl;

struct part {
    int modelNumber;
    int partNumber;
    float cost;
};

int main(){
    
    part part1 = {10,20,22.21};
    part part2;
    
    cout << "Model "<<part1.modelNumber;
    cout << endl;
    cout << "Part  "<<part1.partNumber;
    cout << endl;
    cout << "Cost "<<part1.cost;
    cout << endl;
// //     
    
    part2 = part1;
    cout << "Model on part2 "<< part2.modelNumber;
    cout << endl;
    cout << "Part on part2 "<< part2.partNumber;
    cout << endl;
    cout << "Cost on part2 "<< part2.cost;
    cout << endl;
    
//     taking user input for exit
    cout<< "Press enter to exit";
    cout << endl;
    cin.ignore();
    cin.ignore();
}
