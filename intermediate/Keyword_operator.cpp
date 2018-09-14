#include <iostream>

using std::endl;
using std::cout;

class Counter{
	private:
		unsigned int count;
	public:
		Counter() : count(1){
		}
		
		unsigned int get_count(){
			return count;
		}
		void operator ++ (){
			++count;
		}
};

int main(){
	Counter c1,c2;
	
	cout << "c1 = "<<c1.get_count();
	cout << "c2 = "<<c2.get_count();
	
	++c1;
	++c2;
	
	return 0;
}
