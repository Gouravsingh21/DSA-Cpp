#include<iostream>
using namespace std;

int main(){
	cout<<"Enter the input to find prime till number"<<endl;
	int n;
	cin>>n;
	int arr[n+1]={0};  //intialize all array with 0
	int index=2;
	
	// adding smallest prime of number at their index
	while(index<=n/2){
		if(arr[index]!=0){
			index++;
		}else{
			for(int i=index+1;i<n+1;i++){
				if(i%index==0 and arr[i]==0){
					arr[i]=index;
				}
			}
			index++;
		}
	}
	
	// replacing rest prime number with their smallest prime
	cout<<"prime numbers are:-"<<endl;
	for(int j=2;j<n+1;j++){
		if(arr[j]==0){
			arr[j]=j;
		}
	}	
	
	// printing prime factorization of all 0 to n
	index=2;
	while(index<n+1){
		int num=index;
		while(num>1){
			cout<<arr[num]<<" ";
			num=num/arr[num];
		}
		cout<<endl;
		index++;
	}
	
}
