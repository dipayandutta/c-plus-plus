#include <iostream>

using std::cout;
using std::endl;

struct node{
	int data; //holds the data element of the linked list
	node *next; // holds the next address of the linked list item
};

class linked_list{
	
	private:
		node *head; // holds the start address of the linked list
		node *tail; // holds the last address of the linked list 
		
	public:
		linked_list(){
			head = NULL;
			tail = NULL;
		}	
};

int main(){
	
	linked_list object;
	return 0;
}
