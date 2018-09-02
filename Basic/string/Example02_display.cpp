/*Enter a character to show its octal , decimal and hexadecimal code*/

#include <iostream>
#include <string>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void message(string );

int main(){
    
    char ch;
    string prompt = "\nEnter a character";
    message(prompt);
    
    return 0;
    
}

void message(string show_message){
    cout << show_message;
    cout << endl;
    cout << "Hit return to exit";
    cin.ignore();
    cin.ignore();
    
}
