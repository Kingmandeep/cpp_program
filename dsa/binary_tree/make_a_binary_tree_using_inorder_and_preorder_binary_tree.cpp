#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* left;
	Node* right;
	Node(int val){
		data =val;
		left=NULL;
		right=NULL;
	}
};
int search(int inorder[], int start, int end, int curr){
	for(int i=start;i<=end;i++){
		if(inorder[i]==curr){
			return i;
		}
	}
	return -1;
}
Node* make_tree(int preorder[], int inorder[], int start, int end){
	static int ind=0;
	if(start>end){
		return NULL;
	}
	int curr=preorder[ind];
	ind++;
	Node* node=new Node(curr);
	if(start==end){
		return node;
	}
	int pos=search(inorder,start,end,curr);
	node->left=make_tree(preorder,inorder,start,pos-1);
	node->right=make_tree(preorder,inorder,pos+1,end);
}

void inorders(Node* root){
	if(root==NULL){
		return;
	}
	inorders(root->left);
	cout<<root->data<<" ";
	inorders(root->right);
}
void preorders(Node* root){
		if(root==NULL){
		return;
	}
	cout<<root->data<<" ";
	preorders(root->left);
	
	preorders(root->right);
}
void postorders(Node* root){
		if(root==NULL){
		return;
	}
	
	postorders(root->left);
	
	postorders(root->right);
	cout<<root->data<<" ";
}
int main(){
	int preorder[]={1,2,4,3,5};
	int inorder[]={4,2,1,5,3};
	Node* root=make_tree(preorder, inorder, 0,4);
	inorders(root);
	cout<<endl;
	preorders(root);
	cout<<endl;
	postorders(root);
	
}
