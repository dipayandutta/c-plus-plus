#include <iostream>
#include <array>

int main(){
	std::array<int,4> my_array;
	my_array = {20,23,12,1};
	for(int values:my_array){
		std::cout << values;
		std::cout<<std::endl;
	}
}
