#include <algorithm>
#include <iostream>
#include <vector>

int main(){
	auto is_divisable_by_10 = [divisor=10](int dividend){
		return dividend%divisor == 0;
	};

	std::vector<int> my_vector = {20,43,23,11};
	auto itr = std::ranges::find_if(my_vector,is_divisable_by_10);
	std::cout<< *itr;
	return 0;
}
