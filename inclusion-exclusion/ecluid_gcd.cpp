#include <iostream>
using namespace std;

int main(){
	//find gcd using ecluid inclusion exculsion principle
	int a,b;
	cout<<"enter first number:- ";
	cin>>a;
	cout<<endl;
	cout<<"enter second number:- ";
	cin>>b;
	cout<<endl;
	
	int rem=1;
	int c=max(a,b);
	int d=min(a,b);
	while(rem>0){
		rem=c%d;
		c=d;
		d=rem;
	}
	cout<<"gcd of two numbers is:- "<<c<<endl;
	return c;
}
