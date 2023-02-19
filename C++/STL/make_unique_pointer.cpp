#include <iostream>
#include <memory>

int main(){
	auto ptr = std::make_unique<int[]>(10);

	for (int i=0;i<10;i++){
		ptr[i] = i*i;
	}
	std::cout<< ptr[5]<< std::endl;
	return 0;
}
