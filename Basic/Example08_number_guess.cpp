/*Program to Guess number*/
#include <iostream>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;

int main(){
	
	srand(time(NULL)); //Set random seed
	bool play_more = true;
	int target = 0;
	int guess = 0;

	while(play_more){
			target = 1+rand() % 50 ;
			while(true){
					cout << "Guess the number , or 0 to quit";
					cout << endl;
					cin  >> guess;

					if (guess == 0){
							play_more = false;
							break;
						}
					else if (guess == target){
							cout << "Corrent Answer"<< endl;
							break;
						}
					else if (guess < target){
							cout << "Too Low ! Try again";
							cout << endl;
							cout << "Corrent Number is "<< target;
						}
					else {
							cout << "Too high , Try again";
							cout << endl;
							cout << "Corrent Number is "<< target;
						}
				}
		}
		cout << "Press Enter to exit from the programm";
		cout << endl;

		cin.ignore();
		cin.ignore();

		return 0;
	}
