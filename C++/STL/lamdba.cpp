#include <functional>
#include <iostream>

std::function<int(int,int)> returnLamdba(){
	return[] (int x,int y){
		return x*y;
	};
}

int main(){
	auto lf = returnLamdba();
	std::cout<<lf(16,7)<<std::endl;
}
