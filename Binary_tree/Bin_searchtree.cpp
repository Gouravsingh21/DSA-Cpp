// write a program to implement binary search tree 
#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* left=NULL;
		Node* right=NULL;
		
	Node(int val){
		data=val;
	}
};

Node* insert(Node* root,int val){
	if(root==NULL){
		return new Node(val);
	}
	if(val < root->data){
		root->left=insert(root->left,val);
	}else{
		root->right=insert(root->right,val);
	}
	return root;
}

void inorder(Node* root){
	if(root==NULL){
		return;
	}
	inorder(root->left);
	cout<<root->data<<endl;
	inorder(root->right);
}

int main(){
	Node* root=new Node(1);
	insert(root,2);
	insert(root,3);
	insert(root,4);
	inorder(root);
	return 0;
}
