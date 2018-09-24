#include <iostream>

using std::cout;
using std::endl;

struct node{
	int data;
	node *next;
};

class linked_list{
	
	private:
		node *head;
		node *tail;
	public:
		linked_list(){
			head = NULL;
			tail = NULL;
		}
		
		void add_node (int node_element){
			
			node *temp = new node ; // allocating space required for a new node by new operator
			temp->data = node_element ; // assigning the varaible value in the next node data section
			temp->next = NULL;
			
			/*If the head is NULL , it means that there is no linked list yet and the current node is the head*/
			if (head == NULL){
				head = temp;
				tail = temp;
			}
			/*If the head is not NULL , it means that we have a linked list and we just have to add the node at the end of the list*/
			else{
				tail->next = temp;
				tail = tail->next;
			}
		}
};

int main(){
	
	linked_list* object = new linked_list();
	object->add_node(10);
	object->add_node(20);
}
