// write a program to implement deletion in binary search tree
#include <bits/stdc++.h>
#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* left;
	Node* right;
	Node(int val){
		data=val;
		left=NULL;
		right=NULL;
	}	
};

void insert(Node* r,int val){
	if(r==NULL){
		return;
	}
	Node* temp=r;
	Node* node=new Node(val);
	while(temp!=NULL){
		if(temp->data>val){
			if(temp->left==NULL){
				temp->left=new Node(val);
				return;
			}
			temp=temp->left;
		}else{
			if(temp->right==NULL){
				temp->right=new Node(val);
				return;
			}
			temp=temp->right;
		}
	}
}

Node* minvalueNode(Node* r){
	Node* temp=r;
	while(temp !=NULL && temp->left != NULL)
		temp=temp->left;
	return temp;
}

Node* deletion(Node* r,int val){
	if(r=NULL){
		return r;
	}
	if(r->data >val){
		Node* res=deletion(r->left,val);
	}else if(r->data<val){
		Node* res=deletion(r->right,val);
	}else{
		if(r->left==NULL){
			Node* temp=r->right;
			free(r);
			return temp;
 		}
		if(r->right==NULL){
 			Node* temp=r->left;
 			free(r);
 			return temp;
		}
		Node* temp= minvalueNode(r);
		r->data=temp->data;
		r->right=deletion(r->right,temp->data);
	}
	return r;
}

void inorder(Node* r){
	if(r==NULL){
		return;
	}
	inorder(r->left);
	cout<<r->data<<" ";
	inorder(r->right);
}

void preorder(Node* r){
	if(r==NULL){
		return;
	}
	cout<<r->data<<" ";
	preorder(r->left);
	preorder(r->right);
}

int main(){
	Node* root=new Node(5);
	insert(root,2);
	insert(root,-3);
	insert(root,4);
	insert(root,10);
	insert(root,7);
	insert(root,8);
	inorder(root);
	cout<<endl;
	deletion(root,10);
	inorder(root);
	cout<<endl;
//	preorder(root);
	return 0;
}

