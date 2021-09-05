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

void insert(Node* root, int key)
{
    Node* newnode = new Node(key);
    Node* x = root;
    Node* y = NULL;
    while (x != NULL) {
        y = x;
        if (key < x->data)
            x = x->left;
        else
            x = x->right;
    }
    if (y == NULL)
        y = newnode;
    else if (key < y->data)
        y->left = newnode;
    else
        y->right = newnode;
}
    
Node* search(Node* r,int key){
	if(r==NULL || r->data==key){
		return r;
	}
	if(key<r->data)
		return search(r->left,key);
	return search(r->right,key);
}    
     
void inorder(Node* root){
	if(root==NULL){
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

int main(){
	Node* root=new Node(5);
	insert(root,3);
	insert(root,9);
	insert(root,2);
	insert(root,10);
	insert(root,8);
	inorder(root);
	cout<<endl;
	cout<<search(root,9)<<endl;
	return 0;
}
