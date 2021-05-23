// maximum arithmatic subarray

#include<iostream>
#include<conio.h>
using namespace std;

int arith_sub(int a[],int n){
	int diff=a[0]-a[1];
	int count=0;
	int res=0;
	for(int i=1;i<n-1;i++){
		if(diff == (a[i]-a[i+1])){
			count++;
			res=max(count,res);
		}
		else{
			diff=a[i]-a[i+1];
			count=0;
		}
	}
	return res+2;
}

int main(){
	int num;
	cout<<"enter the number of elements in array"<<endl;
	cin>>num;
	int arr[num];
	for(int i=0;i<num;i++){
		cin>>arr[i];
	}
	cout<<endl;
	cout<<"length of maximum arithmatic subarray "<<arith_sub(arr,num);
	getch();
	return 0;
}
