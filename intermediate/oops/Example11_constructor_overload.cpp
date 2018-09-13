#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Complex{
	
	float x, y;
	
	public:
		Complex();
		Complex(float a){
			x = y = a;
		}
		Complex(float real , float imag){
			x = real;
			y = imag;
		}
		
		friend Complex sum(complex , complex);
		friend void show(Complex);
};

Complex sum (Compelx object_one , Complex object_two){
	
	Complex object_three;
	
	object_three.x = object_one.x + object_two.y;
	object_three.y = object_one.y + object_two.y;
	
	return object_three;
}

void show(Complex c){
	cout << c.x< " +j"<< c.y;
	cout << endl;
}

int main(){
	Complex A(2.3,4.6);
	Complex B(10);
	Complex C ;
	
	C = sum(A , B);
	
	cout << "A = "<< show(A);
	cout << "B = "<< show(B);
	cout << "C = "<< show(C);
	
	return 0;
}
