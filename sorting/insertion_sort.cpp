//write a program to check insertion sort
//1 5 2 8 0 

#include<iostream>
#include<conio.h>
using namespace std;

void insertion(int a[],int n){
	for(int i=1;i<n;i++){
		int current=a[i];
		int j=i-1;     
		while (j>=0 && a[j]>current){
			a[j+1] = a[j];
			j = j-1;
		}
		a[j+1]=current;
	}
	
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}


int main(){
	cout<<"Enter the number of elements in array"<<endl;
	int num;
	cin>>num;
	cout<<"Enter the elements of array"<<endl;
	int arr[num];
	for(int i=0; i<num; i++){
	cin>>arr[i];
	}
	cout<<endl;
	cout<<"the sorted array using bubble sort"<<endl;
	insertion(arr,num);
	getch();
	return 0;
}
