// All the maximum values from the previous elements.

#include<iostream>
#include<conio.h>
using namespace std;

int maximum_value(int a[],int n){
	int max=a[0],count=0;
	for(int i=1;i<n;i++){
		if(a[i]>max){
			cout<<"record alert!!! "<<a[i]<<endl;
			count++;
			max=a[i];
		}
	}
	return count;
}

int main(){
	int num;
	cout<<"ente the number of elements in array"<<endl;
	cin>>num;
	int arr[num];
	for(int i=0;i<num;i++){
		cin>>arr[i];
	}
	cout<<endl;
	cout<<"the total number of record breaking day"<<maximum_value(arr,num);
	getch();
	return 0;
}
