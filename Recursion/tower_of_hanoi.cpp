// Solve tower of hanoi using recursion
#include<iostream>
using namespace std;

void tower_of_hanoi(int n,char src, char des, char help){
	if(n==0){
		return;
	}
	tower_of_hanoi(n-1,src,help,des);
	cout<<"Move form "<<src<<" to "<<des<<endl;
	tower_of_hanoi(n-1,help,des,src);
}

int main(){
	int n=3;
	char A='A';
	char B='B';
	char C='C';
	tower_of_hanoi(n,A,B,C);
	return 0;
}
