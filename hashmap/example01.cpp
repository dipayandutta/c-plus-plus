#include <iostream>
#include <map>
#include <iterator>

using std::map;
using std::endl;
using std::cout;
using std::pair;

int main(){
	
	map <int , int> items;
	
	//insert elements in the map
	items.insert(pair <int,int>(10,20));
	items.insert(pair <int,int>(30,40));
	items.insert(pair <int,int>(70,90));

	//print elements in the hashmap
	map<int,int> :: iterator itr;
	cout << "Elements in the map";
	cout << endl;
	
	for(itr=items.begin();itr!=items.end();++itr){
		cout << itr->first;
		cout << endl;
		cout << itr->second;
	}
	return 0;
}
