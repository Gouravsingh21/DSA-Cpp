//print sum of all subarray in the array;
//using brute force approach

#include<iostream>
#include<conio.h>
using namespace std;
// 1 2 3 4 5  l=0 r=5
void sub_sum(int a[],int l,int r){
	if(l<=r){
		int sum=0;
		for(int i=l;i<=r-1;i++){
			for(int j=l;j<=i;j++){
				cout<<a[j];
				sum=sum+a[j];
			}
			cout<<endl;
			cout<<"sum of above subarray"<<sum<<endl;
			sum=0;
		}
		sub_sum(a,l+1,r);
	}

}

int main(){
	int num;
	cout<<"enter the number of elements in the array"<<endl;
	cin>>num;
	int arr[num];
	for(int i=0;i<num;i++){
		cin>>arr[i];
	}
	cout<<"Sum of all subarray in the array are as give:-"<<endl;
	sub_sum(arr,0,num);
	getch();
	return 0;
}
