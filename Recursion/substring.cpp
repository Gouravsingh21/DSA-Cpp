// print all substrings of a string using recursion

#include<iostream>
using namespace std;

void substring(string name,string ans){
	if(name.length()==0){
		cout<<ans<<endl;
		return ;
	}
	char ch=name[0];
	string res=name.substr(1);
	substring(res,ans);
	substring(res,ans+ch);
}

int main(){
	string n="ABC";
	substring(n,"");
	return 0;
}

