//to calculate combination nCr.

#include<iostream>
#include<conio.h>
using namespace std;

int fact(int n){
	if(n==1 or n==0){
		return 1;
	}
	if(n==2){
		return 2;
	}
	int res=n*fact(n-1);
	return res;
}



int main(){
	int num,r,res;
	cout<<"Enter n"<<endl;
	cin>>num;
	cout<<"Enter r"<<endl;
	cin>>r;
	res=fact(num)/(fact(r)*fact(num-r));
	cout<<"The Combination of given input \n"<<res<<endl;
	getch();
	return 0;	
}
