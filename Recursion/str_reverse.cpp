// Reverse the string using the recursion

#include<iostream>
using namespace std;

void reverse(string name){
	if(name.length()==0){
		return;
	}
	reverse(name.substr(1));
	cout<<name[0];
	
}

int main(){
	string n="gourav";
	reverse(n);
	return 0;
}
