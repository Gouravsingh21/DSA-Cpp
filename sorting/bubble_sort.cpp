// wirte a program to implement selection sort
//3 1 5 2 8 0

#include<iostream>
#include<conio.h>
using namespace std;

void bubble(int a[],int n){
	for(int i=0;i<n;i++){
		for(int j=0; j<n-i;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
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
	bubble(arr,num);
	getch();
	return 0;	
}

