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
	
	int l=height(node->left);
	int r=height(node->right);
	
	return max(l,r)+1;
}
int diameter(Node* node){
	if(node==NULL){
		return 0;
	}
	
	int lh=height(node->left);
	int rh=height(node->right);
	
	int cd=lh+rh+1;
	
	int d=diameter(node->left);
	int e=diameter(node->right);
	
	return max(cd,max(d,e));
}
int main(){
	Node* root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	
	cout<<diameter(root);
}
