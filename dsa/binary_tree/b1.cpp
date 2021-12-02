#include<iostream>
#include<queue>
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

int count_nodes(Node* node){
	if(node==NULL){
		return 0;
	}
	
	return count_nodes(node->left) + count_nodes(node->right) +1;
	
}

int sum_nodes(Node* node){
	if(node==NULL){
		return 0;
	}
	
	int lsum=sum_nodes(node->left);
	int rsum=sum_nodes(node->right);
	
	return lsum+rsum+node->data;
}

int height(Node* node){
	
	if(node==NULL){
		return 0;
	}
	
	return max(height(node->left),height(node->right))+1;
}

int diameter(Node* node){
	if(node==NULL){
		return 0;
	}
	
	int l=height(node->left);
	int r=height(node->right);
	
	int lrd=l+r+1;
	
	int ld=diameter(node->left);
	int rd=diameter(node->right);
	
	return max(max(ld,rd),lrd);
}

void sum_replacement(Node* node){
	if(node==NULL){
		return;
	}
	
	sum_replacement(node->left);
	sum_replacement(node->right);
	
	if(node->left!=NULL){
		node->data+=node->left->data;
	}
	
	if(node->right!=NULL){
		node->data+=node->right->data;
	}
}

void preorder(Node* node){
	if(node==NULL){
		return;
	}
	
	cout<<node->data<<" ";
	preorder(node->left);
	preorder(node->right);
}

bool balanced_height(Node* node){
	if(node==NULL){
		return true;
	}
	
	if(balanced_height(node->left)==false){
		return false;
	}
	
	if(balanced_height(node->right)==false){
		return false;
	}
	
	int lh=height(node->left);
	int rh=height(node->right);
	
	if(abs(lh - rh)<=1){
		return true;
    }else{
    	return false;
	}
}
int main(){
	
//	         1
//	        2  3
//	     4  5  6  7
//                    8 
//                       9
	Node* root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	root->right->left=new Node(6);
	root->right->right=new Node(7);
	root->right->right->right=new Node(8);
//	root->right->right->right->right=new Node(9);
	
	
	cout<<count_nodes(root);
	cout<<endl<<sum_nodes(root);
	cout<<endl<<height(root);
	cout<<endl<<diameter(root)<<endl;
//	sum_replacement(root);
//	cout<<endl;
//    preorder(root);
    if(balanced_height(root)){
    	cout<<"balanced"<<endl;
	}else{
		cout<<"unbalanced"<<endl;
	}
}
