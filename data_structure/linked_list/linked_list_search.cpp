#include<iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

/*Class holding a linked list element */
class Node{
	public:
		Node *next; // for address of the next node
		int data;   // for storing data 
};

class linked_list_search {
		
	public:
		int length;
		Node *head;
		
		linked_list_search(); 	//constructor
		~linked_list_search();	//destructor
		void add(int element);	// add items in the list
		void display_list();	//display items from the list
		void search_result();	// search function 
		int isPresent();		// function to check if the item is present in the list
		
};

linked_list_search::linked_list_search(){
	this->head = NULL;
	this->length = 0;
}

linked_list_search::~linked_list_search(){
	cout << "List Deleted!!!";
	cout << endl;
}

void linked_list_search::add(int element){
	Node *node = new Node();		// Creating an object of the node class
	
	node->data = element;			// assiging the data variable from the element argument
	node->next = this->head;		// moving the next pointer to the next head
	this->head = node;				// assigning head to node
	this->length++;					// incrementing the length
}

void linked_list_search::display_list(){
	Node *head = this->head;
	int i ;
	i=1;
	cout << head;
	while(head){
		cout << i << ":"<<head->data;	// Prinitng the data itmes present in the list
		cout << endl;
		head = head->next;				// moving the head to the next head
		i++;
	}
}

void linked_list_search::search_result(){
	int result;
	//linked_list_search* object = new linked_list_search();
	//object->isPresent();
	result = isPresent(); // Calling the  function to return a value
	
	if (result){
		cout << "Item is present in the list";
		cout << endl;
	}
	else{
		cout << "Item is not present in the list";
		cout << endl;
	}
	
}
 //Function Defination of isPresent function
int linked_list_search::isPresent(){
	int search_element;
	cout << "Enter item to search in the list";
	cout << endl;
	cin  >> search_element;
	
	cout << "Number to search for "<< search_element;
	cout << endl;
	
	Node *head = this->head;
	int i;
	i = 1;
		
	int found = 0;
	cout << head;
	while(head){
		if(head->data == search_element){		// Checking is the data is present or not
			found++;			
		}
		
	
		head = head->next;
		i++;
		
	}
	cout << "Found "<< found;
	cout << endl;
	
	return found;
}

int main(){
	
	string prompt("Linked List Search Example"),line(50,'*');
	cout << prompt;
	
	linked_list_search* list = new linked_list_search();	// creating an object of the linked list search class to call methods
	
	for(int i=0;i<20;i++){
		list->add(i);
	}
	list->display_list();
	cout << "Length of the list is "<<list->length;
	cout << endl;
	list->search_result();
	
	delete list;
	
	return 0;
}
