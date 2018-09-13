#include <iostream>

class BaseClass {
	private:
		int a;
	public:
		BaseClass();
		
		friend class DerivedClass;
};

BaseClass::BaseClass(){
	a = 30;
}
class DerivedClass{
	
	private:
		int b;
	public:
		void display_BaseClass(BaseClass& x){
			std::cout << x.a;
		}
};

int main(){
	
	BaseClass base;
	DerivedClass derived;
	
	derived.display_BaseClass(base);
	
	return 0;
}
