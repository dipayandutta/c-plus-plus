#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main(){
    
    string prompt("What your name: "), /*asking for user input*/
                 name, /*input variable*/
                 line(40,'-'), /*String with 40 '-'*/
                 total = "Hello"; /*default string value*/
                 
    cout << prompt;
    getline(cin,name); /*Taking user input*/
    
    total += name+"\t"; /*string concatination operation*/
    
    cout << line;
    cout << endl;
    
    cout << total ;
    cout << endl;
    
    cout << "Your name is "<< name;
    cout << endl;
    
    cout << "String length";
    cout << name.length(); /*length of the string*/
    cout << endl;
    
    cout << "Press enter to exit";
    cout << endl;
    
    cin.ignore();
    cin.ignore();
    
    return 0;
}
