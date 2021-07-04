// find intersection of two linked list

#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
	Node(int val){
		data=val;
		next=NULL;
	}
};

Node* addnode(Node* &head,int val){
	Node* temp=head;
	Node* n=new Node(val);
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n;
	return temp->next;
}

int length(Node* head){
	int count=0;
	while(head->next!=NULL){
		count++;
		head=head->next;
	}
	return count;
}

Node* last_k(Node* &head,int k){
	int step=length(head)-k;
	Node* newtail;
	Node* temp=head;
	int count=0;
	while(temp->next!=NULL){
		if(step==count){
			newtail=temp;
		}
		temp=temp->next;
		count++;
	}
	temp->next=head;  
	head=newtail->next;
	newtail->next=NULL;
	return head;
}

Node* display(Node* head){
	while(head->next!=NULL){
		cout<<head->data<<"->";
		head=head->next;
	}
	cout<<head->data<<"->NULL"<<endl;
}
int main(){
	Node* head=new Node(1);
	addnode(head,2);
	addnode(head,3);
	addnode(head,4);
	addnode(head,5);
	addnode(head,6);
	addnode(head,7);
	Node* res=last_k(head,2);
	res=last_k(head,2);
	display(res);
	return 0;
}
