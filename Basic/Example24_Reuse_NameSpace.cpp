#include <iostream>

using std::cout;
using std::endl;

namespace MyNameSpace{
	int i;
}

namespace MyNameSpace{
	int j;
}

int main(void){

	MyNameSpace::i = MyNameSpace::j = 20;

	cout << MyNameSpace::i * MyNameSpace::j;
	cout << endl;
	
	return 0;
}
