//Write a program to perform linear search

#include<iostream>
#include<conio.h>
using namespace std;

int linear(int n,int arr[] ,int a){
	for(int i=0;i<n;i++){
		if(arr[i]==a){
			return i;
		}
	}
	return -1;
}
int main(){
	cout<<"Enter the size of array"<<endl;
	int num;
	cin>>num;
	int arr[num];
	for(int i=0;i<num;i++){
		cin>>arr[i];
	}
	cout<<endl;
	cout<<"enter the number to be found"<<endl;
	int a;
	cin>>a;
	cout<<"index of desired number "<<a<<" is"<<linear(num,arr,a)+1<<endl;
	getch();
	return 0;
}
