#include<iostream>
#include<stack>
using namespace std;

int postfix(string s){
	stack<int> stk;
	for(int index=0;index<s.length(); index++){
		if(s[index]>='0' && s[index]<='9'){
			stk.push(s[index]-'0');
		}
		else{
			int opd2=stk.top();
			stk.pop();
			int opd1=stk.top();
			stk.pop();
			switch(s[index]){
				case '+':
					stk.push(opd1 + opd2);
					break;
				case '-':
					stk.push(opd1 - opd2);
					break;
				case '*':
					stk.push(opd1 * opd2);
					break;
				case '/':
					stk.push(opd1 / opd2);
					break;
			}
		}
	}
	return stk.top();
}

int main(){
	cout<<postfix("46+2/5*7+")<<endl;
	return 0;
}
