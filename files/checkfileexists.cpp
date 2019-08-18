#include<iostream>
#include<fstream>
#include<cstdlib>

using std::endl;
using std::cout;

using std::ifstream;
using std::ofstream;

int main(void)
{
  int first,second,third;

  ifstream in_stream;
  ofstream out_stream;

  in_stream.open("Hello.txt");
  if(in_stream.fail()){
    cout << "Unable to open the file";
    cout << endl;
    exit(1);
  }

  out_stream.open("file.txt");
  if(out_stream.fail()){
    cout << "Unable to open the file";
    cout << endl;
    exit(1);
  }
  in_stream >> first >> second >> third;
  out_stream << (first+second+third);

  in_stream.close();
  out_stream.close();

  return 0;
}
