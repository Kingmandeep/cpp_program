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

//int find_level(Node* root){
//	
//	if(root==NULL){
//		return 0;
//	}
//	int sum=0;
//	queue<Node*> q;
//	q.push(root);
//	q.push(NULL);
//	while(!q.empty()){
//		Node* node=q.front();
//		q.pop();
//		if(node!=NULL){
//			sum+=node->data;
//			if(node->left){
//				q.push(node->left);
//			}
//			if(node->right){
//				q.push(node->right);
//			}
//		}else if(!q.empty()){
//			q.push(NULL);
//		}
//	}
//	return sum;
//}

int sum_level(Node* root){
	if(root==NULL){
		return 0;	
	}
	return sum_level(root->left) + sum_level(root->right) + root->data;
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
	
	cout<<sum_level(root)<<endl;
}
