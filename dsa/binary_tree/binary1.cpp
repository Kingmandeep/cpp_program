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
void level_order(Node* node){
	if(node==NULL){
		return;
	}
	queue<Node*> q;
	q.push(node);
	q.push(NULL);
	
	while(!q.empty()){
		Node* root=q.front();
		q.pop();
		if(root!=NULL){
			cout<<root->data<<" ";
			
			if(root->left){
				q.push(root->left);
			}
			if(root->right){
				q.push(root->right);
			}
		}else if(!q.empty()){
			q.push(NULL);
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
	level_order(root);
}
