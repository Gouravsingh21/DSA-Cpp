// smallest positive missing number

#include<iostream>
#include<conio.h>
using namespace std;

int positive_no(int a[],int n){
	int a2[n]={false};
	int index;
	for(int i=0;i<n;i++){
		if(a[i]>0 && a[i]<=n){
			index=a[i];
			a2[index-1]=true;
			cout<<index<<endl;
		}
	}
	for(int i=0;i<n;i++){
		cout<<a2[i]<<" ";
	}
	cout<<endl;
	
	for(int j=0;j<n;j++){
		if(a2[j]==false){
			return j+1;
		}
	}
	return n+1;
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
	cout<<"smallest missing positive number "<<positive_no(arr,num);
	getch();
	return 0;
}
