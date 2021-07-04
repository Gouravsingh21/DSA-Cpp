// write a program to implement qeues

#include<iostream>
using namespace std;
#define n 10

class Queue{
	int* arr;
	int first;
	int last;

	public:
		Queue(){
			arr=new int[n];
			first=-1;
			last=-1;
		}
		
		void enque(int data){
			if(last==n-1){
				cout<<"queue is overflow"<<endl;
				return;
			}
			if(last==-1){
				first++;
			}
			last++;
			arr[last]=data;
			cout<<"enque"<<arr[last]<<" "<<last<<endl;
		}
		void deque(){
			if(first==-1 || first>last){
				cout<<"no element in queue"<<endl;
			}
			first++;
		}
		int top(){
			if(first==-1 || first>last){
				cout<<"no element in queue"<<endl;
			}
			cout<<arr[first]<<endl;
		}
		bool isempty(){
			if(first==-1 || first>last){
				return true;
			}else{
				return false;
			}
		}
		
	
};
int main(){
	Queue q1;
	q1.enque(1);
	q1.enque(2);
	q1.enque(3);
	q1.enque(4);	
	q1.top();
	q1.deque();
	q1.top();
	q1.deque();
	q1.deque();
	q1.top();
	q1.deque();
	q1.top();
	q1.deque();
	
	return 0;
}
