// write a program to do selection sort over array
//3 6 1 8 10 2
#include<iostream>
using namespace std;

void selection(int a[],int num){
	for(int i=0;i<num;i++){
		int min_indx=i;
		for(int j=i+1;j<num;j++){
			if(a[min_indx]>a[j]){
				min_indx=j;				
			}
		}
		int temp=a[i];
		a[i]=a[min_indx];
		a[min_indx]=temp;
	}
	for(int i=0; i<num;i++){
		cout<<a[i]<<" "<<endl;
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
	cout<<"the sorted array using selection sort"<<endl;
	selection(arr,num);
	return 0;
	
}
