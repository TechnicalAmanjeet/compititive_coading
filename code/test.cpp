#include<bits/stdc++.h>
using namespace std;

// ( start ) initializing linked list node 

class Node{
public:
	int data;
	Node* next;
};

// ( start ) PUSH operation.

void Push(Node** node_ref,int data){
	Node* new_node = new Node(); // create new node dynamically.
	new_node->data = data;
	new_node->next = (*node_ref);
	(*node_ref) = new_node;
}
 
void push(Node** head_ref, int new_data)
{
    /* 1. allocate node */
    Node* new_node = new Node();
 
    /* 2. put in the data */
    new_node->data = new_data;
 
    /* 3. Make next of new node as head */
    new_node->next = (*head_ref);
 
    /* 4. move the head to point to the new node */
    (*head_ref) = new_node;
}

void showdata(Node *node){
	// if(node->next == 0){cout<<" Empty list. "<<endl;}
	while(node->next != NULL){
		cout<<node->data<<" ";
		node = node->next;
	}
	// cout<<node->next<<" ";
}


// ( start ) execution on main function starts here
int main(){
	Node* Head = NULL;
	push(&Head,1);
	push(&Head,2);
	// Push(&Head,3);
	// Push(&Head,4);
	showdata(Head);

	return 0;
}