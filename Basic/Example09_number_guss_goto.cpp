#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main(){
				int lower_bound;
				int upper_bound;
				int n =1;
				int cmd=1;

		top_of_prog:
				lower_bound=1;
				upper_bound=50;

				cout << "Think a number between 1 to 50";
				cout << endl;
				cout << "Then Press Enter";
				cin.ignore();
				bool guess_again = true;

				do {
								n = static_cast<int>((lower_bound+upper_bound)/2.0);
								cout << "I guess "<< n << "number";
								cout << endl;
								cout << "Please Response";
								cout << endl;
								cout << "1 Correct Guess";
								cout << endl;
								cout << "2 guess was too low";
								cout << endl;
								cout << "3 Guess was to high";
								cout << endl;
								cin >> cmd;

								if (cmd == 1){
												cout << "Correct Guesss";
												cout << endl;
												guess_again = false;
										}
								else if(cmd == 3){
												upper_bound = n-1;
										}
								else{
												lower_bound = n+1;
										}
						}while(guess_again);

						cout << "Play again ? 1 == yes and 2 == No ";
						cin >> cmd;
						if (cmd == 1){
								goto top_of_prog;								
								}
						
				return 0;
		}
