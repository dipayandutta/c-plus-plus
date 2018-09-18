#include <iostream>

using std::endl;
using std::cout;

class Counter{
	protected:
		unsigned int count;
	public:
		Counter():count(0){
		}
		Counter(int c) : count(c){
		}
		unsigned int get_count() const{
		return count;
		}
		Counter operator ++(){
			return Counter(count++);
		}
};

class CountDown : public Counter{
	public:
		Counter operator -- (){
			return Counter(--count);
		}
};

int main(){
	CountDown c1;
	cout << c1.get_count(); //0
	cout << endl;
	
	++c1; //1
	++c1; //2
	++c1; //3
	++c1; //4
	
	cout << c1.get_count();
	cout << endl;
	
	--c1; //3
	
	cout << c1.get_count();
	cout << endl;
	return 0;
}
