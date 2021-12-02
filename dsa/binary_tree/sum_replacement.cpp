#include<bits/stdc++.h>
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
void sum(Node* node){
	if(node==NULL){
		return;
	}
	sum(node->left);
	sum(node->right);
	
	if(node->left!=NULL){
		node->data+=node->left->data;
	}
	
	if(node->right!=NULL){
		node->data+=node->right->data;
	}
	
}
void preorder(struct Node* root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
void inorder(struct Node* root){
	if(root==NULL){
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
int main(){
	Node* root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	root->right->left=new Node(6);
	root->right->right=new Node(7);
	preorder(root);
	cout<<"\n";
	inorder(root);
	cout<<"\n";
	sum(root);
	preorder(root);
	cout<<"\n";
	inorder(root);
	
}
