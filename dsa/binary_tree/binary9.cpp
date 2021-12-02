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

void left_view(Node* node){
	
	if(node==NULL){
		return;
	}
	
	queue<Node*> q;
	q.push(node);
	
	
	while(!q.empty()){
		int n=q.size();
		for(int i=1;i<=n;i++){
			Node* root=q.front();
		    q.pop();
		    
		    if(i==1){
		    	cout<<root->data<<" ";
			}
			if(root->left){
				q.push(root->left);
			}
			if(root->right){
				q.push(root->right);
			}
		
		}
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
	left_view(root);
}
