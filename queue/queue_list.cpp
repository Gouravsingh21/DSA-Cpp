// write a program to make queue using linked list
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

class Queue{
	Node* first;
	Node* last;
	public:
		Queue(){
			first=NULL;
			last=NULL;	
		}
	
	void enqueue(int data){
		Node* temp=new Node(data);
		if(first==NULL || last==NULL){
			first=temp;
			last=temp;
			return;
		}
		last->next=temp;
		last=temp;
	}
	void deque(){
		if(first==NULL){
			cout<<"no element in queue"<<endl;
			return;
		}
		Node* temp_delete=first;
		first=first->next;
		delete temp_delete;
	}
	
	void top(){
		if(first==NULL){
			cout<<"No element in queue"<<endl;
			return;
		}
		cout<<first->data<<endl;
	}
};

int main(){
	Queue q1;
	q1.enqueue(1);
	q1.enqueue(2);
	q1.enqueue(3);
	q1.enqueue(4);
	q1.top();
	q1.deque();
	q1.top();
	
	return 0;
}
