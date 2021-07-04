// write a program to implement conversion of infix to prefix

// steps of coversion from infix to prefix
// reverse the string or loop  and apply the same operation which was previos using 
            // in the infix to postfix
// 1:-  if operand comes == print element
// 2:- if ( comes == push of stack
// 3:- if ) comes == pop from stack until ( is found
// 4:- if operator comes == pop from stack until operator of less precedence not found

#include<iostream>
#include<stack>
using namespace std;
int preced(char x){
	if(x=='^'){
		return 3;
	}else if(x=='*' || x=='/'){
		return 2;
	}else if(x=='+' || x=='-'){
		return 1;
	}else{
		return -1;
	}
}


string rev(string s){
	string res;
	for(int index=s.length();index>=0;index--){
		if(s[index]==')'){
			res=res+'(';
			
		}else if(s[index]=='('){
			res=res+')';
			
		}else{
			res=res+s[index];
		}
	}
	return res;
}

string inftopre(string s){
	stack<char> stk;
	s=rev(s);
	string res;
	for(int index=0; index<s.length();index++){
		if((s[index]>='0' && s[index]<='9') || (s[index]>='a' && s[index]<='z')){
			cout<<s[index];
		}else if(s[index]=='('){
			stk.push(s[index]);
		}else if(s[index]==')'){
			while(!stk.empty() && stk.top()!='('){
				res=res+stk.top();
//				cout<<stk.top();
				stk.pop();
			}
			stk.pop();
		}else{
			int ind_pred=preced(s[index]);
			while(!stk.empty() && ind_pred<=preced(stk.top())){
				res=res+stk.top();
//				cout<<stk.top();
				stk.pop();
			}
			stk.push(s[index]);
		}
	}
	while(!stk.empty()){
		res=res+stk.top();
//		cout<<stk.top();
		stk.pop();
	}
	res=rev(res);
	return res;
}

int main(){
	cout<<inftopre("(a-b/c)*(a/k-l)");
	
	return 0;
} 
