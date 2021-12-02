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
int maxNode(Node* node){
	if(node==NULL){
		return 0;
	}
	
	int lheight=maxNode(node->left);
	int rheight=maxNode(node->right);
	
	return max(lheight,rheight)+1;
}
int main(){
	Node* root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	root->right->left=new Node(6);
	root->right->right=new Node(7);
	root->left->right->left=new Node(8);
	root->left->right->left->left=new Node(9);
	cout<<maxNode(root)<<endl;
}
