#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main(){
	
	vector<int> v; //Declearing a vector 
	
	//inserting item on the vector = A dynamic Array
	v.push_back(1); 
	v.push_back(2);
	v.push_back(4);
	
	//Displaying items in the vector 
	
	vector<int>::iterator it;
	for(it=v.begin();it!=v.end();it++){
		cout << *it;
	}
	cout << endl;
	
	//poping up
	v.pop_back();
	
	//Iterating again on the vector
	for(it=v.begin();it!=v.end();it++)
		cout << *it;
		
	return 0;
}
