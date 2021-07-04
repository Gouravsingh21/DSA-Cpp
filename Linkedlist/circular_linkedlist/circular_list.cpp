// create the circular linked list 

#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next=NULL;
	Node(int val){
		data=val;
	}
};

void addnode(Node* &h,int val){
	Node* n=new Node(val);
	Node* temp=h;
	while(temp->next!=h && temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n;
	n->next=h;
}

void display(Node* head){
	Node* temp=head;
	while(temp->next!=head){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
}

int main(){
	Node* head=new Node(1);
	addnode(head,2);
	addnode(head,3);
	addnode(head,4);
	addnode(head,5);
	addnode(head,6);
	addnode(head,7);
	display(head);
	return 0;
}
