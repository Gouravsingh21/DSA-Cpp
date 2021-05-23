//write prime number between two user entered number

#include<iostream>
#include<conio.h>
using namespace std;

void checkPrime(int a, int b){
    cout<<"this is checkPrime function"<<endl;
	bool res=true;
	int val=0;
	for(int i=a+1; i<b;i++){
		val=i;
		res=true;
		for(int j=2;j<i/2+1;j++){
			if(i%j==0){
//				cout<<i<<j<<endl;
				res=false;
				break;
			}		
		}
		if(res==true){
			cout<<"this is prime:-"<<val<<endl;
		}
	}
}


int main(){
	int a,b;
	cout<<"enter the first number"<<endl;
    cin>>a;
	cout<<"enter the second number"<<endl;
	cin>>b;
	cout<<"the prime number between two number is :-"<<endl;
	checkPrime(a,b);
	getch();
	return 0;
}
