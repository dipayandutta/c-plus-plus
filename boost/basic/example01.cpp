#include <boost/lambda/lambda.hpp>
#include <iostream>
#include <iterator>
#include <algorithm>

int main(){

	typedef std::istream_iterator<int> in;
	std::cout<< "Type Any Number ";
	std::cout << std::endl;

	std::for_each(in(std::cin),in(),std::cout<<(boost::lambda::_1 * 10)<<"Type Any Number");
	return 0;
}
