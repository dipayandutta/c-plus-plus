#include "stackTemplate.hpp"

int main(){
	stack_<int> s(5);

	s.push(1);
	s.push(2);
	s.push(3);

	int v = s.pop();
	cout << v << endl;


	return 0;
}
