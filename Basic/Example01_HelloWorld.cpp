/*
	A simple Hello World Printing in the Console
	Example-01
*/

#include <iostream>

using std::cout; // Accessing cout symbol in the std namespace
using std::endl; // Accessing endl symbol in the std namespace
using std::cin;  // Accessing cin symbol in the std namespace

int main(){
	
		cout << "Hello World!"; // Printing a simple hello world message string 
		cout << endl; // A new line is added 
		cout << "Press Enter to Exit!";
		cout <<endl;
		cin.ignore();//Consume carriage return
		cin.ignore();//Pause for user to press ENTER
		cout << endl; // A new line is added

		return 0; // Returning exit code 0 to the Operating System
	}
