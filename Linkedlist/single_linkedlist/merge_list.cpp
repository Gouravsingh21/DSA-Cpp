// merge two sorted linked list

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

void addnode(Node* &head,int val){
	Node* temp=head;
	Node* n=new Node(val);
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n;
}

Node* merge_list(Node* &head1,Node* &head2){
	Node* start=new Node(0);
	Node* temp=start;
	Node* temp1=head1;
	Node* temp2=head2;
	while(temp2->next!=NULL || temp1->next!=NULL){
		if(temp1->data<temp2->data){
			temp->next=temp1;
			temp1=temp1->next;
		}else{
			temp->next=temp2;
			temp2=temp2->next;
		}
		temp=temp->next;
	}

	return start;
}

void display(Node* head){
	while(head->next!=NULL){
		cout<<head->data<<"->";
		head=head->next;
	}
	cout<<head->data<<"->NULL"<<endl;
	
}

int main(){
	Node* head1=new Node(1);
	Node* head2=new Node(2);
	addnode(head1,4);
	addnode(head1,6);
	addnode(head1,8);
	addnode(head2,3);
	addnode(head2,5);                          
	addnode(head2,7);
	Node* res=merge_list(head1,head2);
	display(res);
	return 0;
}
