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

void flatten(Node* node){
	if(node==NULL || (node->left==NULL && node->right==NULL)){
		return;
	}
	
	if(node->left!=NULL){
		flatten(node->left);
		
		Node* temp=node->right;
		node->right=node->left;
		node->left=NULL;
		
		Node* t=node->right;
		while(t->right!=NULL){
			t=t->right;
		}
		t->right=temp;
	}
	flatten(node->right);
}

void inorder(Node* node){
	if(node==NULL){
		return;
	}
	
	inorder(node->left);
	cout<<node->data<<" ";
	inorder(node->right);
}
int main(){
	Node* root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	inorder(root);
	cout<<endl;
	flatten(root);
	inorder(root);
	
}
