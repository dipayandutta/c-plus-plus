#include <iostream>

namespace SampleNameSpace
{
	int start;
	int end;
	class counter{
		int count;
		public:
			counter(int n){
				if(n<=start)
					count = n;
				else
					count = start;
			}
			void reset(int n){
				if(n<=start)
					count = n;
			}
			int run(){
				if (count > end)
					return count --;
				else
					return end;
			}
	};
}

int main(void){

	SampleNameSpace::start = 100;
	SampleNameSpace::end   = 0;
	SampleNameSpace::counter object1(10);
	int i;
	do {
		i = object1.run();
		std::cout<<i<<std::endl;
	}while(i > SampleNameSpace::end);
	std::cout << std::endl;


	return 0;
}
