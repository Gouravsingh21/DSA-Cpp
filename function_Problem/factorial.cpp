//write a program to print factorial of number

#include<iostream>
#include<conio.h>
using namespace std;

int fact(int n){
	if(n==1){
		return 1;
	}
	if(n==2){
		return 2;
	}
	int res=n*fact(n-1);
	return res;
}



int main(){
	cout<<"Enter the number of term"<<endl;
	int num;
	cin>>num;
	cout<<"The factorial of "<<num<<"\n"<<fact(num)<<endl;
	getch();
	return 0;	
}
