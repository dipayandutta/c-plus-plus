#include <iostream>
#include <array>

void print_array(std::array<int,3> display_array){
	for (int values:display_array){
		std::cout<< values << std::endl;
	}
}

void print_array(std::array<float,3> display_array){
	for(float values:display_array){
		std::cout<< values<< std::endl;
	}

}

int main(){
	std::array<int,3> my_int_array = {23,32,44};
	print_array(my_int_array);

	std::array<float,3> my_float_array = {10.22,44.12,23.2};
	print_array(my_float_array);
}
