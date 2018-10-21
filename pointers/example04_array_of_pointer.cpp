#include <iostream>
#include <string.h>

using std::cout;
using std::cin;
using std::endl;

int main(void){
	
	int i = 0;
	char *ptr[10]={
		"books",
		"python",
		"c++"
	};
	char str[25];
	
	cout << "Enter";
	cout << endl;
	
	cin >> str;
	
	for(i=0;i<4;i++){
		if(!strcmp(str,ptr[i])){
			cout << "Not Found";
			cout << endl;
		}
		else{
			cout << "Found "<<str;
			cout << endl;
		}
	}
	return 0;
}
