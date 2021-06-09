#include<iostream>
using namespace std;

int main(){
	cout<<"Enter the first range"<<endl;
	int a;
	cin>>a;
	cout<<"Enter the second range"<<endl;
	int b;
	cin>>b;
	
	cout<<"Enter the number to check divisible"<<endl;
	int n;
	cin>>n;
	
	int a1=n/a;
	int b1=n/b;
	int n1=n/(a*b);
	
	return (a1+b1-n1);
}
