#include <iostream>
#include <process.h>

using std::cout;
using std::endl;

class Stack{
	protected:
		enum {MAX = 3}; //size of the stack array
		int st[MAX];    //stack array of integers
		int top ;		//index to top of the stack
	public:
		Stack(){		//Constructor
			top = -1;
		}
		void push(int var){
			st[++top] = var; //push items in the stack
		}
		int pop(){
			return st[top--]; // pop item from the stack - LIFO
		}
		
};

class stack : public Stack {
	public:
		void push(int var){
			if (top >=MAX){
			cout <<"Stack full ...";
			cout << endl;
			exit(1);
		}
			//else call push()
			Stack::push(var);
		}
		int pop(){
			if(top<0){
				cout << "Error . Stack is empty";
				cout << endl;
			}
			return Stack::pop();
		}
		
		void showItems(){
			for(int i=0;i<MAX;i++){
				cout << st[i];
				cout << endl;
			}
		}
};

int main(){
	stack stk;
	
	
	stk.push(1);
	stk.push(2);
	stk.push(3);
	
	stk.showItems();
	
	stk.pop();
	
	stk.showItems();
	return 0;
}
