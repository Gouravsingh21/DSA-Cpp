// write a program to print the sum of maximum subarray

#include<iostream>
#include<conio.h>
using namespace std;

int max_sum(int a[],int n){
	int cur_sum=0;
	int max_sum=0;
	for(int i=0;i<n;i++){
		cur_sum=cur_sum+a[i];
		if(cur_sum<0){
			cur_sum=0;
		}
		if(cur_sum>max_sum){
			max_sum=cur_sum;
		}
	}
	return max_sum;
}

int main(){
	int num=5;
//	cin>>num;
	int arr[num]={-4,8,-2,8 ,1};
//	for(int i=0;i<num;i++){
//		cin>>arr[i];
//	}
	cout<<"the maximum sum of subarray is "<<max_sum(arr,num)<<endl;
	getch();
	return 0;
}

