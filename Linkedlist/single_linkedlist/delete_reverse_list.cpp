#include <iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next=NULL;
	Node(int val){
		data=val;
	}
};

void addnode(Node* &head,int val){
	Node* n= new Node(val);
	Node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n;
}

void delete_node(Node* &head,int val){
	Node* temp=head;
	Node* previous;
	while(temp->data!=val){
		previous=temp;
		temp=temp->next;
	}
	previous->next=temp->next;
	delete temp;
}

void delete_head(Node* &head){
	Node* temp=head;
	head=head->next;
	delete temp;
}


void display(Node* head){
	while(head->next!=NULL){
		cout<<head->data<<"->";
		head=head->next;
	}
	cout<<head->data<<"->NULL"<<endl;
	
}

Node* reverse(Node* &head){
	Node* previous=NULL;
	Node* current=head;
	Node* forward;
	while(current!=NULL){
		forward=current->next;	
		current->next=previous;
		previous=current;
		current=forward;
	}
	head=previous;
	return head;
}
int main(){
	Node* head= new Node(1);
	addnode(head,2);
	addnode(head,3);
	addnode(head,4);
	addnode(head,5);
//	delete_node(head,3);
//	delete_head(head);
	head=reverse(head);
	display(head);
	return 0;
}
