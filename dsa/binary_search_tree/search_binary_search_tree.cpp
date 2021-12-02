#include<bits/stdc++.h>
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

Node* insertBST(Node* root,int val){
	
	if(root==NULL){
		return new Node(val);
	}
	
	if(val<root->data){
		root->left=insertBST(root->left,val);
	}else{
		root->right=insertBST(root->right,val);
	}
	
	return root;
}

void inorder(Node* root){
	if(root==NULL){
		return;
	}
	
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
bool search(Node* root,int val){
	if(root->data==val){
		return true;
	}
	if((root->left==NULL && root->right==NULL) || root==NULL){
		
		return false;
		
	}
	if(val<root->data){
		search(root->left,val);
		
	}else{
		search(root->right,val);
	}
}
Node* inorderSucc(Node* root){
	Node* curr=root;
	while(curr && curr->left!=NULL){
		curr=curr->left;
	}
	
	return curr;
}
Node* deleteBST(Node* root,int val){
	if(val<root->data){
		root->left=deleteBST(root->left,val);
	}
	else if(val>root->data){
		root->right=deleteBST(root->right,val);
	}else{
		if(root->left==NULL){
			Node* temp=root->right;
			free(root);
			return temp;
		}else if(root->right==NULL){
			Node* temp=root->left;
			free(root);
			return temp;
		}
		
		Node* temp=inorderSucc(root->right);
		root->data=temp->data;
		root->right=deleteBST(root->right,temp->data);
	}
	
	return root;
	
}
int main(){
	Node* root=NULL;
	root=insertBST(root,3);
	insertBST(root,2);
	insertBST(root,7);
	insertBST(root,1);
	insertBST(root,5);
	insertBST(root,8);
	insertBST(root,4);
	insertBST(root,6);
	
	inorder(root);
	cout<<endl<<search(root,5);
	root=deleteBST(root,5);
	cout<<endl;
	inorder(root);
}
