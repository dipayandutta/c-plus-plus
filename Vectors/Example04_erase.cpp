#include <iostream>
#include <vector>

using std::endl;
using std::cout;
using std::vector;

int main(){
	
	vector<int> v;
	
	vector<int>::iterator it;
	
	v.push_back(10);
	v.push_back(30);
	v.push_back(34);
	v.push_back(40);
	
	
	//Before eraseing
	for(it=v.begin();it!=v.end();it++)
		cout << *it << " ";
		cout << endl;
	cout << endl;
	
	//remove first element from the vector
	it = v.begin();
	v.erase(it);
	
	//After Erasing
	for(it=v.begin();it!=v.end();it++)
		cout << *it << " ";
		cout << endl;
		
	return 0;
}
