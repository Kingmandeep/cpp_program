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
	
	queue<Node*>q;
	q.push(node);
	
	while(!q.empty()){
		
		int n=q.size();
		for(int i=0;i<n;i++){
			Node* node=q.front();
			q.pop();
			
			if(i==0){
				cout<<node->data<<" ";
			}
			if(node->left){
				q.push(node->left);
			}
			if(node->right){
				q.push(node->right);
			}
		}
	}
}

int main(){
	//	        1
//	    2        3
//	  4  5      6  7 
//	    9              8
	Node* root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
//	root->left->right->left=new Node(9);
	root->right->left=new Node(6);
	root->right->right=new Node(7);
	root->right->right->right=new Node(8);

     left_view(root);
}
