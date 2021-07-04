#include<iostream>
using namespace std;

// convert pi into value of pi in a string using recursion

void convert_pi(string value){
	if(value.length()==0){
		return;
	}	
	int num;
	if(value[0]=='p' && value[1]=='i'){
		cout<<3.14;
		num=2;
	}else{
		cout<<value[0];
		num=1;
	}
	convert_pi(value.substr(num));
}

int main(){
	string data="piipedpiipippi";
	convert_pi(data);
	return 0;
}
