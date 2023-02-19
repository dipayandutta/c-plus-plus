#include <boost/asio.hpp>
#include <iostream>

using namespace boost;

int main(){

	std::string local_host_ip = "127.0.0.1";
	unsigned short port_num = 3333;

	boost::system::error_code ec;

	asio::ip::address ip_address = asio::ip::address::from_string(local_host_ip,ec);

	if (ec.value() != 0){
		std::cout << "Falied to parse ip address . Error code = "<< ec.value();
		std::cout << ec.message();

		return ec.value();
	}
	asio::ip::tcp::endpoint ep (ip_address,port_num);
	return 0;

}
