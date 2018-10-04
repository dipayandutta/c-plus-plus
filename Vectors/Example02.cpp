#include <iostream>
#include <vector>

using std::endl;
using std::cout;
using std::vector;

int main(){
	
	vector<int> variable_vector;
	
	for(int i=1;i<10;i++){
		variable_vector.push_back(i); // inserting items in the vector 
	}
	
	cout << "Size : "<< variable_vector.size();
	cout << endl;
	cout << "Capcity : "<<variable_vector.capacity();
	cout << endl;
	cout << "Max Size : "<< variable_vector.max_size();
	
	variable_vector.resize(5);
	
	cout << endl;
	cout << "Now the size of the vector is : "<< endl;
	cout << variable_vector.size();
	cout << endl;
	
	//Check if the vector is empty or not
	if(variable_vector.empty() == false){
		cout << "Vector is not Empty";
	}
	else{
		cout << "Vector is not Empty";
		
	}
	cout << endl;
	
	for(vector<int>::iterator i = variable_vector.begin();i!=variable_vector.end();i++){
		cout << *i << " ";
	}
	
	return 0;
}
