#include<iostream>
#include<conio.h>
using namespace std;

// program to find all prime numbers using sieve of eratosthenes
int main(){
	cout<<"Enter the input to find prime till number"<<endl;
	int n;
	cin>>n;
	bool arr[n+1] = {true};
	for(int i=1;i<n+1;i++){
		arr[i]=true;
	}	
	int index=2;
	while(index<=n/2){
		if(arr[index]==false){
			index++;
		}else{
			for(int i=index+1;i<n+1;i++){
				
				if(i%index==0){
					arr[i]=false;
				}
			}
			index++;
		}
	}
	cout<<"prime numbers are:-"<<endl;
	int count=0;
	for(int j=2;j<n+1;j++){
		if(arr[j]==true){
			cout<<j<<endl;
			count++;
		}
	}	
	cout<<endl;
	cout<<"total number of prime number are "<<count<<endl;
}
