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
int height(Node* node){
	if(node==NULL){
		return 0;
	}
	return max(height(node->left), height(node->right)) +1;
}
bool balanced(Node* node){
	if(node==NULL){
		return true;
	}
	if(balanced(node->left)==false){
		return false;
	}
	if(balanced(node->right)==false){
		return false;
	}
	
	int lh=height(node->left);
	int rh=height(node->right);
	if(abs(lh-rh)<=1){
		return true;
	}else{
		return false;
	}
}
int main(){
	Node* root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	root->right->left=new Node(6);
	root->right->right=new Node(7);
	root->right->right->left=new Node(8);
	root->right->right->left->right=new Node(9);
	if(balanced(root)){
		cout<<"Balanced"<<endl;
	}else{
		cout<<"UNBalanced"<<endl;
	}
	
}
