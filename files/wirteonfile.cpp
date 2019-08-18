#include<iostream>
#include<fstream>

using std::cout;
using std::endl;
using std::cin;
using std::ifstream;
using std::ofstream;

int main(void){

  char data[100]; //variable to store the name from the input line

  ofstream outfile; // object of the output stream
  outfile.open("file.txt"); // open the output file

  //check if the file is available or not
  if(outfile.fail()){
    cout << "unable to open the file";
    cout << endl;
    exit(1);
  }
  //read user input
  cout << "Write to the file " << endl;
  cout << "Enter your name ";
  cout << endl;
  cin.getline(data,100);

  //write the name(data) to the file
  outfile << data << endl;

  //close the outfile
  outfile.close();

  //now open the file in the read mode
  ifstream infile;
  infile.open("file.txt");
  if(infile.fail()){
    cout << "Unable to open the file";
    cout << endl;
    exit(1);
  }
  cout << "Reading from the file ";
  cout << endl;

  infile >> data;

  //write the data on the screen
  cout << data << endl;

  //close the infile
  infile.close();
  return 0;
}
