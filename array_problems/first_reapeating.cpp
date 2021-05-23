// write a program to find the first repeating element in array
// 2,1,7,3,4,4,5 
// 
#include<iostream>
#include<conio.h>
using namespace std;

int  repeat(int a[],int n){
	int a2[10]={-1}; // creatig duplicate array
	int min_val=INT_MAX;
	for(int i=0;i<10;i++){
		a2[i]=-1;
	}
	for(int i=0;i<n;i++){
		int index=a[i];
		if(a2[index] != -1){
			min_val=min(min_val,a2[index]);
		}
		else{
			a2[index]=i;
		}
	}
	return min_val;
}

int main(){
	int num=7;
	cout<<"enter the no. of elements in array"<<endl;
//	cin>>num;
	int arr[num]={8,1,2,3,9,9,5};
	for(int i=0;i<num;i++){
//		cin>>arr[i];
	}
	cout<<endl;
	cout<<"first repeating number in array is "<<repeat(arr,num)<<endl;
	getch();
	return 0;
}
