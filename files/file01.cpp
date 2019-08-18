#include <iostream>
#include <fstream>
using std::cout;
using std::ifstream;
using std::ofstream;
using std::endl;

int main(void){

  ifstream in_stream;
  ofstream out_stream;

  in_stream.open("file.txt");
  out_stream.open("out.txt");

  int first,second,third;

  in_stream >> first >> second >> third;
  out_stream << "The sum of the first 3 numbers is "<< (first+second+third);
  cout << endl;

  in_stream.close();
  out_stream.close();

  return 0;
}
