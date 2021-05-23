//Write a program to check pythagorian triplet

#include<iostream>
#include<conio.h>
using namespace std;

void check_triplet(int x, int y, int z){
	int a,b,c;
	a = max(x,max(y,z));
	if (a==x){
		b=y;
		c=z;
	}else if(a==y){
		b=x;
		c=z;
	}else{
		b=y;
		c=x;
	}
	if(a*a == b*b+c*c){
		cout<<"Numbers are triplet"<<endl;
	}else{
		cout<<"numbers are not triplet"<<endl;
	}
	
}


int main(){
	cout<<"Enter three numbers"<<endl;
	int a,b,c;
	cin>>a>>b>>c;
	check_triplet(a,b,c);
	return 0;
}
