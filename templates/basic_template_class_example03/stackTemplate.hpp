#include <iostream>

using std::endl;
using std::cout;

template <typename T>

class stack_{
	
	T * arr;
	int size;
	int number_of_elements;

	public:
		stack_(int s){
			arr = new T[s];
			size = s;
			number_of_elements = 0 ;
		}

		void push(T x){
			if (number_of_elements == size){
				cout << "Stack Full ";
				return ;
			}

			arr[number_of_elements] = x;
			number_of_elements++;

		}

		T pop(){
			if (number_of_elements == 0){
				cout << "Stack is Empty ";
				cout << endl;
				return -1;
			}

			T value = arr[number_of_elements-1];
			number_of_elements--;
			return value;
		}
};
