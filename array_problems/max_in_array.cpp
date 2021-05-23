//write a program to find the maximum element in array;

#include<iostream>
#include<conio.h>
using namespace std;

int minimum(int a[],int n){
	int max=a[0];
	for(int i=1;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	return max;
}

int main(){
	int num;
	cout<<"Enter the no of elements of array"<<endl;
	cin>>num;
	cout<<"enter the elements of array"<<endl;
	int arr[num];
	for(int i=0;i<num;i++){
		cin>>arr[i];
	}
	cout<<"The maximun number in array "<<minimum(arr,num);
	getch();
	return 0;
}
