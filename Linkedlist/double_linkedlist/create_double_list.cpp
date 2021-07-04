// write a program to create double linked list

#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* prev;
		Node* next;
	Node(int val){
		next=NULL;
		prev=NULL;
		data=val;
	}
};

void addnode(Node* &head,int val){
	Node* n = new Node(val);
	Node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n;
	n->prev=temp;
}

void display(Node* head){
	while(head->next!=NULL){
		cout<<head->prev<<" ";
		cout<<head->data<<"->";
		cout<<head->next<<" ";
		head=head->next;
	}	
	cout<<head->prev<<" "<<head->data<<"->NULL"<<endl;
}

int main(){
	Node* head=new Node(1);
	addnode(head,2);
	addnode(head,3);
	addnode(head,4);
	addnode(head,5);
	display(head);
	return 0;
}
