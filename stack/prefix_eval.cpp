#include<iostream>
#include<stack>
using namespace std;

int prefix(string s){
	stack<int> stak;
	for(int index=s.length(); index>=0;index--){
		if(s[index]>='0' && s[index]<='9'){
			stak.push(s[index]-'0');
		}
		else{
			int opd1 = stak.top();
			stak.pop();
			int opd2 = stak.top();
			stak.pop();
			switch(s[index]){
				case '+':
					stak.push(opd1 + opd2);
					break;
				case '-':
					stak.push(opd1-opd2);
					break;
				case '*':
					stak.push(opd1*opd2);
					break;
				case '/':
					stak.push(opd1/opd2);
					break;
			}
//			cout<<stak.top()<<endl;
		}
	}
	return stak.top();
}

int main(){
	cout<<prefix("-+7*45+20")<<endl;
	return 0;
}
