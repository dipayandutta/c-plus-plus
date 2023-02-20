#include <iostream>
#include <array>

int main(){
	std::array<int,3> my_array; //array defination
	for(int i=0;i<=2;i++){
		my_array[i] = i*i;
	}
	std::cout<<my_array[2]<<std::endl;
	std::cout << "Size of the array is -->"<<my_array.size()<<std::endl;
	return 0;
}
