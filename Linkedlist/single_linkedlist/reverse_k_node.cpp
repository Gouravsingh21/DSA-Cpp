// reverse k node in linked list  using recursion

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

void addnode(Node* &head, int val){
	Node* n=new Node(val);
	Node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n;
}

Node* reverse(Node* &head,int k){
	Node* pre=NULL;
	Node* curr=head;
	Node* fore;
	int count=0;
	while(curr!=NULL && count<k){
		fore=curr->next;
		curr->next=pre;
		pre=curr;
		curr=fore;
		count++;
	}
	if(fore!=NULL){
		head->next=reverse(fore,k);
	}
	return pre;
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
	addnode(head,2);
	addnode(head,3);
	addnode(head,4);
	addnode(head,5);
	addnode(head,6);
	addnode(head,7);
	addnode(head,8);
	addnode(head,9);
	addnode(head,10);
	display(head);
	Node* newhead=reverse(head,4);
	display(newhead);
	return 0;
}
