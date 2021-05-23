//write a program to print fibnacci series

#include<iostream>
#include<conio.h>
using namespace std;

int fibo(int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	int res=fibo(n-1)+fibo(n-2);
	return res;
}



int main(){
	cout<<"Enter the number of term"<<endl;
	int num;
	cin>>num;
	cout<<"The fibonnaci series is \n"<<fibo(num)<<endl;
	getch();
	return 0;	
}
