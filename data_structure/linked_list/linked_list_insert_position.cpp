#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Node{
	public:
		Node *next;
		int data;
};

class linked_list{
	
	public:
		int length;
		Node *head;
		
		linked_list();
		~linked_list();
		void add(int element);
		void display();
		void insertPos(Node** current , int post , int data);
};

linked_list::linked_list(){
	this->head = NULL;
	this->length = 0;
}

linked_list::~linked_list(){
	cout << "List Deleted!!!";
	cout << endl;
}

void linked_list::add(int element){
	Node *node = new Node();
	
	node->data = element;
	node->next = this->head;
	this->head = node;
	
	this->length++;
}

void linked_list::display(){
	Node *head = this->head;
	int i;
	i=0;
	
	while(head){
		cout << i << ":" << head->data;
		cout << endl;
		head = head->next;
		i++;
	}
}

void linked_list::insertPos(Node **current, int pos , int data){
	
	if(pos<1 || pos >this->length+1){
		cout << "Invalid Position!";
		cout << endl;
	}
	else{
		while(pos--){
			if(pos==0){
				Node *temp = add(data);
				temp->next = *current;
				*current = temp;
			}
			else{
				current = &(*current)->next;
			}
			this->length++;
		}
	}
}

int main(){
	
	string prompt("Linked List Search Example");
	cout << prompt;
	
	linked_list* list = new linked_list();	// creating an object of the linked list search class to call methods
	
	for(int i=0;i<20;i++){
		list->add(i);
	}
	list->display();
	list->insertPos(&list,2,2);
	cout << "Length of the list is "<<list->length;
	cout << endl;
	list->search_result();
	
	delete list;
	
	return 0;
}

