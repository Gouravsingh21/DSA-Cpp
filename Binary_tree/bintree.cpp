// write a program to create the inorder preorder and postorder traversal

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

void preorder(Node* root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<endl;
	preorder(root->left);
	preorder(root->right);
}

void inorder(Node* root){
	if(root==NULL){
		return;
	}
	preorder(root->left);
	cout<<root->data<<endl;
	preorder(root->right);
}

void postorder(Node* root){
	if(root==NULL){
		return;
	}
	preorder(root->left);
	preorder(root->right);
	cout<<root->data<<endl;
}
int main(){
	Node* root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->right->right=new Node(5);
	cout<<"preorder"<<endl;
	preorder(root);
	cout<<"inorder"<<endl;
	inorder(root);
	cout<<"postorder"<<endl;
	postorder(root);
	return 0;	
}
