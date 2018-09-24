#include <iostream>

using std::cout;
using std::endl;
using std::cin;

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
		void display_list();
		void search_item();
};

linked_list::linked_list(){
	this->head = NULL;
	this->length = 0;
}

linked_list::~linked_list(){
	cout << "List Deleted!";
	cout << endl;
}

void linked_list::add(int element){
	
	Node *node = new Node();
	node->data = element;
	node->next = this->head;
	this->head = node;
	this->length++;
}

void linked_list::display_list(){
	Node *head =this->head;
	int i ;
	i =1;
	while(head){
		cout << i <<":"<<head->data;
		cout << endl;
		head = head->next;
		i++;
	}
}

void linked_list::search_item(){
	
	int search_element;
	cout << "Enter item to search in the list";
	cout << endl;
	cin  >> search_element;
	
	cout << "Number to search for "<< search_element;
	cout << endl;
	
	Node *head = this->head;
	int i;
	i = 1;
	while(head){
		if(head->data == search_element){
			cout << "Item Found at position "<<i;
			cout << endl;
			
		}
		
		else{
			cout << "Item not Found!";
			cout << endl;
		}
		head = head->next;
		i++;
		
	}
}
int main(){
	
	linked_list* list = new linked_list();
	for(int i =0 ; i<20;i++){
		list->add(i);
	}
	list->display_list();
	cout << "Length of the list is"<<list->length;
	cout << endl;
	list->search_item();
	delete list;
	
	return 0;
}
