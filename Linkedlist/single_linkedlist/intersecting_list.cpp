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

Node* intersect(Node* head1, Node* head2){
	int diff=max(length(head1),length(head2))-min(length(head1),length(head2));
	if(length(head1)!=length(head2)){
		int index=0;
		if(length(head1)>length(head2)){
			while(index<diff){
				index++;
				head1=head1->next;
			}
		}else{
			while(index<diff){
				index++;
				head2=head2->next;
			}
		}
	}
	while(head1 != head2){
		head1=head1->next;
		head2=head2->next;
	}
	
	return head1;
}
int main(){
	Node* head1= new Node(1);
	Node* head2= new Node(5);
	addnode(head1,2);
	addnode(head1,3);
	addnode(head1,4);
	addnode(head1,5);
	addnode(head1,6);
	Node* get=addnode(head1,7);
	addnode(head2,6);
	addnode(head2,7);
	Node* send=addnode(head2,8);
	send->next=get;
	Node* res=intersect(head1,head2);
	cout<<"intersect at "<<res->data;
	return 0;
}
