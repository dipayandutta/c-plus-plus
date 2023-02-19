#include <iostream>
#include <memory>

int main(){
	std::unique_ptr<int[]> ptr(new int[10]);//dynamically alloaction of array of 10 integers
	//creating values in the array
	for (int i=0; i<10;i++){
		ptr[i] = i*i;
	}
	//display the result
	std::cout<< ptr[4]<< std::endl;
	return 0;
}
