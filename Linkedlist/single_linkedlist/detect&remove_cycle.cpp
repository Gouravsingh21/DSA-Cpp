// Detection and removal of cycle in Linked list

// Using floyd's algorithm (hare and tortoise)
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

void makecycle(Node* &head, int pos){
	Node* temp=head;
	Node* startcyl;
	int count=1;
	while(temp->next!=NULL){
		if(count==pos){
			
			startcyl=temp;
		}
		temp=temp->next;
		count=count+1;
	}
	if (pos==1){
		temp->next=head;
		return;
	}
	if(pos==count){
		cout<<"cannot enter the last node"<<endl;
		return;
	}
	temp->next=startcyl;
}

string detect_cyl(Node* head){
	Node* slow_ptr=head;
	Node* fast_ptr=head;
	while(fast_ptr!=NULL && fast_ptr->next!=NULL){
		slow_ptr=slow_ptr->next;
		fast_ptr=fast_ptr->next->next;
		if(fast_ptr==slow_ptr){
			return "YES";
		}
	}
	return "NO";
}

void remove_cyl(Node* &head){
	Node* slow=head;
	Node* fast=head;
	do{
		slow=slow->next;
		fast=fast->next->next;		
	}while(fast!=slow);
	
	fast=head;
	while(slow->next != fast->next){
		fast=fast->next;
		slow=slow->next;
	}
	slow->next=NULL;
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
	makecycle(head,6);
	cout<<detect_cyl(head)<<endl;
	remove_cyl(head);
	display(head);
	return 0;
}
