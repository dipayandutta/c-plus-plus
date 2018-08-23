/*CPP program to capture linux command output in a variable*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using std::cout;
using std::endl;
using std::string;


string CommandOutput(string cmd){
				
				string data;
				FILE * stream;

				const int max_buffer = 256;
				char buffer[max_buffer];
				cmd.append(" 2>&1");

				stream = popen(cmd.c_str(),"r");
				if(stream){
								while(!feof(stream))
										if(fgets(buffer,max_buffer,stream)!=NULL)data.append(buffer);
								pclose(stream);
						}
				return data;
		}

int main(){
				string ls = CommandOutput("ls -la");
				cout << "List of files in the directory" ;
				cout << endl;
				cout << ls;

				return 0;
		}
