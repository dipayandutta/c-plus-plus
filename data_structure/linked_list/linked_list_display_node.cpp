#include <iostream>

using std::cout;
using std::endl;

struct node {
	int data;
	node *next;
};

class linked_list {
	
	private:
		node *head;
		
	public:
		linked_list();
		~linked_list(); 
		void add_node(int node_element);
		void display_nodes();
};

linked_list::linked_list(){
	head = NULL;
	
}

linked_list::~linked_list(){
	cout << "List Deleted!";
	cout << endl;
}

void linked_list::add_node(int node_element){
	
	node *temp = new node();
	temp->data = node_element;
	temp->next = this->head;
	this->head = temp;


}

void linked_list::display_nodes(){
	
	node *next_item = this->head;
	int i ;
	i = 1;
	
	while(next_item){
		cout << i << ":" << next_item->data;
		cout << endl;
		next_item = next_item->next;
		i++;
	}
}

int main(){
	
	linked_list* object = new linked_list();
	for(int i=1;i<10;i++){
		object->add_node(i);
	}
	object->display_nodes();
	//delete object;
	
	return 0;
}
