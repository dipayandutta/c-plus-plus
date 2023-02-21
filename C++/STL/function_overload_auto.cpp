#include <array>
#include <iostream>

void print_array(std::array<auto,3> display_array){
	for(auto values:display_array){
		std::cout<<values<<std::endl;
	}
}
int main(){
	std::array<int,3> my_array_int={1,2,3};
	print_array(my_array_int);
	std::array<float,3> my_array_float = {1.1,2.3,3.4};
	print_array(my_array_float);
}
