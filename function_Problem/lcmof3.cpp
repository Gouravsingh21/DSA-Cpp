// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int arr[3]={20,15,45};
    int n=3;
    bool last=true;
    int mul=2;
    int res=1;
    bool status=false;
    while(last){
    	last=false;
    	status=true;
        for(int i=0;i<n;i++){
            if(arr[i]%mul==0 and arr[i]!=1){
		        arr[i]=arr[i]/mul;
		        status=false;
            }
            if(arr[i]!=1){
                last=true;
            }
        }
        if(status==true){
            mul++;
        }else{
        	res=res*mul;
		}
    }
    cout<<"res="<<res<<endl;
    return 0;
}
