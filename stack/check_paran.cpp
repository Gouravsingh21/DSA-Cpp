// write a program  of balanced paranthesis

#include<iostream>
#include<stack>
using namespace std;

void checkparn(string x){
	stack<char> stk;
	for(int index=0;index<x.length();index++){
		if(x[index]=='('|| x[index]=='{' || x[index]=='['){
			stk.push(x[index]);
		}else{
			
			if(x[index]==')'){
				if(stk.top()=='('){
					stk.pop();
				}
				else{
					cout<<"wrong"<<endl;
					return;
				}
			}else if(x[index]=='}'){
				if(stk.top()=='{'){
					stk.pop();
				}
				else{
					cout<<"wrong"<<endl;
					return;
				}
			}else{
				if(stk.top()=='['){
					stk.pop();
				}
				else{
					cout<<"wrong"<<endl;
					return;
				}
			}
		}
	}
	cout<<"correct paranthesis"<<endl;
}

int main(){
	checkparn("{([]]}");
	return 0;
}
