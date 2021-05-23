//write a program to print pascals triangle
// 1
// 11
// 121
// 1221
// 12321
   
#include <iostream>
#include <conio.h>
using namespace std;

int fact(int n){
	if(n==1 or n==0){
		return 1;
	}
	if(n==2){
		return 2;
	}
	int res=n*fact(n-1);
	return res;
}



int main(){
	cout<<"Enter n"<<endl;
	int n,res;
	cin>>n;
	cout<<"Here is the pascal triangle "<<endl;
	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++){
			res = fact(i)/(fact(j)*fact(i-j));
			cout<<res<<" ";
		}
		cout<<endl;
	}
	getch();
	return 0;	
}

