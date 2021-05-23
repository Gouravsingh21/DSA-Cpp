//write a program to implement merge sort

#include<iostream>
#include<conio.h>
using namespace std;

void merge(int a[],int l,int mid,int r){
	int n1=mid-l+1;
	int n2=r-mid;
	
	int a1[n1];
	int a2[n2];
	
	for(int i=0;i<n1;i++){
		a1[i]=a[i+l];
	}
	for(int j=0;j<n2;j++){
		a2[j]=a[j+mid+1];
	}
	int i=0,j=0; 
	int k=l;
	while (i<n1 && j<n2){
		if(a1[i]<a2[j]){
			a[k]=a1[i];
			i=i+1;
		}
		else{
			a[k]=a2[j];
			j=j+1;
		}
		k=k+1;
	}
	while(i<n1){
		a[k]=a1[i];
		i++;
		k++;
	}
	while(j<n2){
		a[k]=a2[j];
		j++;
		k++;
	}
}



void merge_sort(int a[],int l,int r){
	if(l<r){
		int mid=(l+r)/2;
		merge_sort(a,l,mid);
		merge_sort(a,mid+1,r);
		merge(a,l,mid,r);
	}	
}

void display(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main(){
	cout<<"Enter the number of elements in array"<<endl;
	int num=4;
	cout<<"Enter the elements of array"<<endl;
	int arr[num+1]={4,0,10,2,8};
	display(arr,num+1);
	cout<<"the sorted array using merge sort"<<endl;
	int l=0;
	merge_sort(arr,l,num);
	display(arr,num+1);
	getch();
	return 0;	
}
