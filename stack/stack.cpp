// write a program to implement stack

#include<iostream>
using namespace std;

class stack{
	int* arr;
	int top=-1;
	const int n=10;	
	public:
		stack(){
			arr= new int[n];
		}	
	void push(int data){
		if(top==(n-1)){
			cout<<"stack overflow"<<endl;
			return;
		}
		top++;
		arr[top]=data;
	}
	
	void pop(){
		if(top==-1){
			cout<<"no element in the list"<<endl;
		}
		top--;
	}
	
	int tops(){
		cout<<arr[top]<<endl;
	}
	
	void empty(){
		if(top==-1){
			cout<<"stack is empty"<<endl;
		}else{
			cout<<"stack is not empty"<<endl;
		}
	}
	
};


int main(){
	stack stk;
	stk.push(1);
	stk.push(2);
	stk.tops();
	stk.pop();
	stk.pop();
	stk.push(3);
	stk.tops();
	stk.empty();
}
