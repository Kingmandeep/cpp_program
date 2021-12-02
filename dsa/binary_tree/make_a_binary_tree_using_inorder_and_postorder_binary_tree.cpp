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
int search(int inorder[], int start, int end, int curr){
	for(int i=end;i>=start;i--){
		if(inorder[i]==curr){
			return i;
		}
	}
	return -1;
}
Node* make_tree(int postorder[], int inorder[], int start, int end){
	static int ind=end;
	if(start>end){
		return NULL;
	}
	int curr=postorder[ind];
	ind--;
	Node* node=new Node(curr);
	if(start==end){
		return node;
	}
	int pos=search(inorder,start,end,curr);
	node->right=make_tree(postorder,inorder,pos+1,end);
	node->left=make_tree(postorder,inorder,start,pos-1);
	
	return node;
}
void preorders(Node* root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<" ";
	preorders(root->left);
	preorders(root->right);
}
void inorders(Node* root){
	if(root==NULL){
		return;
	}
	
	inorders(root->left);
	cout<<root->data<<" ";
	inorders(root->right);
}void postorders(Node* root){
	if(root==NULL){
		return;
	}
	
	postorders(root->left);
	postorders(root->right);
	cout<<root->data<<" ";
}
int main(){
	int postorder[]={4,2,5,3,1};
	int inorder[]={4,2,1,5,3};
	Node* root=make_tree(postorder,inorder,0,4);
	preorders(root);
	cout<<endl;
	inorders(root);
	cout<<endl;
	postorders(root);
}
