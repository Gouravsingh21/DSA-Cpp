// create a 2 D array and make transpose of it.

#include<iostream>
#include<conio.h>
using namespace std;

void transpose(int arr[3][3]){
	for(int i;i<3;i++){
		for(int j;j<3;j++){
			cout<<arr[j][i];
		}
		cout<<endl;
	}
}

int main(){
	cout<<"Enter the number of row and colounm"<<endl;
//	cin>>row>>col;
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	cout<<"enter the elements of matrix"<<endl;
	for(int i;i<3;i++){
		for(int j;j<3;j++){
//			cin>>arr[i][j];
		}
	}
	cout<<"the transpose of matrix :- "<<endl;
	transpose(arr);
	getch();
	return 0;
}
