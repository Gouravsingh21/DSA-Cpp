//// write a program to create single linked list

#include<iostream>
#include<conio.h>
using namespace std;

class Node{
	public:
		int data;
		Node* next=NULL;
	Node(int val){
		data=val;
	}
};

void insertAtTail(Node* &h,int val){
	Node* n=new Node(val);
	Node* temp=h;
	while(temp->next!=0){
		temp=temp->next;
	}
	temp->next=n;
}

void insertAtHead(Node* &head,int val){
	Node* n= new Node(val);
	n->next=head;
	head=n;
}

void display(Node* head){
	while(head->next!=NULL){
		cout<<head->data<<"->";
		head=head->next;
	}
	cout<<head->data<<"->NULL"<<endl;
}


int main(){
	Node* head= new Node(1);
	insertAtTail(head,2);
	insertAtTail(head,3);
	insertAtHead(head,4);
	insertAtHead(head,5);
	insertAtTail(head,6);
	display(head);
	return 0;
}
