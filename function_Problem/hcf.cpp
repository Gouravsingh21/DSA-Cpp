#include<iostream>
using namespace std;

int main(){
	int arr[2]={84,42};
    int n=2;
    int num=2;
    bool status=true;
    int hcf=1;
    while(num<=arr[0]){
    	status=true;
    	for(int i=0;i<n;i++){
    		if(arr[i]%num!=0){
    			status=false;
    			break;
			}
		}
		if(status==true){
			hcf=max(hcf,num);
		}
		num++;
	}
	cout<<"res "<<hcf<<endl;
	return 0;
}
