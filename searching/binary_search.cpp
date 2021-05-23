// write a program to perform binary search
//1 3 4 6 8 11 43
//0 1 2 3 4 5 6
#include<iostream>
#include<conio.h>
using namespace std;

int binary(int n, int arr[], int a){
	int mid=0,l=0;
	int r=n-1;
	while(l != r){
		mid=(l+r)/2;
		cout<<mid<<endl;
		if(a>arr[mid]){
			l=mid+1;
		}else if (a<arr[mid]){
			r=mid-1;
		}
		else{
			return mid;
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
	cout<<"index of desired number "<<a<<" is"<<binary(num,arr,a)<<endl;
	getch();
	return 0;
}
