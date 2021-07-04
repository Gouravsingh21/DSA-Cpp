// calculate the power of number using the recursion

#include<iostream>
using namespace std;

int recur(int n,int p){
	if (p==0){
		return 1;
	}
	int res=n*recur(n,p-1);
	return res;
}

int main(){
	int n=3;
	int p=3;
	cout<<"result is:- "<<recur(n,p)<<endl;
	return 0;
}
