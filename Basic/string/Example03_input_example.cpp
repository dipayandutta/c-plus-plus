#include <iostream>
#include <string>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::fixed;
using std::setprecision;
using std::setw;

int main(){
    string label;
    double price;
    
    string prompt = "\nPlease Enter and article label\n";
    cout << prompt;
    
    cin >> setw(16);
    cin >> label;
    
    cin.sync(); // Clears the buffer and resets
    cin.clear(); 
    
    string price_prompt = "\nPlease enter the price of the item \n";
    cout << price_prompt;
    
    cin>> price;
    
    cout << fixed << setprecision(2)
         << "\nArticle "
         << "\n Label "<< label
         << "\n Price "<< price;
        
    cout << endl;
         
    return 0;
}
