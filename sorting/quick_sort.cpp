//write a program to implement quick sort

#include<iostream>
#include<conio.h>

using namespace std;
int partition(int a[],int l,int r){
	int pivot=l;
	int i=l+1;
	int j=r;
	while(i<j){
		while(a[i]<a[pivot]){
			i=i+1;
		}
		while(a[j]>=a[pivot]){
				j=j-1;
			}
		if(i<j){
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;		
		}
		
	}
	int t=a[pivot];
	a[pivot]=a[j];
	a[j]=t;
	return j;
}


void quick(int a[],int l,int h){
	if(l<h){
		int pi=partition(a,l,h);
		quick(a,l,pi-1);
		quick(a,pi+1,h);
	}
}

int main(){
	cout<<"Enter the number of elements in array"<<endl;
	int num=6;
	//cin>>num;
	cout<<"Enter the elements of array"<<endl;
	int arr[num]={5,2,7,10,0,INT_MAX};
	//you can also take input from user
	cout<<endl;
	for(int i=0;i<num;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"the sorted array using quick sort"<<endl;
	int l=0,h=num-2;
	quick(arr,l,h);
	for(int i=0;i<num;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
