// write a program to impement stack using list 
#include<iostream>
using namespace std;

class Node{
	public:
	int data;
	Node* link;
	Node(int val){
		data=val;
		link=NULL;
	}
};

class stak{
	public:
	Node* top=NULL;
	void push(int val);
	void display();
	void pop();
	int peek();
	bool isfull();
	bool isempty();
};

void stak::push(int val){
	if(top==NULL){
		top=new Node(val);
		return;
	}
	Node* node=new Node(val);
	node->link=top;
	top=node;
	return;
}

void stak::pop(){
	if(top==NULL){
		cout<<"stack is underflow"<<endl;
		return;
	}
	top=top->link;
}

int stak::peek(){
	if(top==NULL){
		cout<<"stack is underflow"<<endl;
		return -1;
	}
	return top->data;	
}

bool stak::isempty(){
	if(top==NULL){
		return true;
	}else{
		return false;
	}
}

void stak::display(){
	if(top==NULL){
		cout<<"stack is empty"<<endl;
		return;
	}
	Node* temp=top;
	while(temp!=NULL){
		cout<<temp->data<<endl;
		temp=temp->link;
	}
}

int main(){
	stak obj;
	obj.push(1);
	obj.push(9);
	obj.push(3);
	obj.push(5);
	obj.push(2);
	obj.pop();
	obj.pop();
	cout<<obj.peek()<<endl;
	cout<<obj.isempty()<<endl;
	obj.display();	
	return 0;
}
