#include<iostream>
#include<queue>
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

int find_level(Node* root){
	
	if(root==NULL){
		return 0;
	}
	return find_level(root->left) + find_level(root->right)+1;
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
	root->left->right->left->right=new Node(10);
	root->right->left->right=new Node(11);
	root->right->left->right->right=new Node(12);
	
	cout<<find_level(root)<<endl;
}
