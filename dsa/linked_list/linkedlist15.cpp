#include<iostream>
#include<map>
using namespace std;
class node{
	public:
		int data;
		node* next;
		node(int val){
			data=val;
			next=NULL;
		}
};
void push(node* &head,int val){
	
	node* n=new node(val);
	if(head==NULL){
		head=n;
		return;
	}
	node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n;
}
void display(node* head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
node* middle(node* &head){
	node* temp=head;
	int c=0;
	map<int,node*> m;
	while(temp!=NULL){
		m[c]=temp;
		c++;
		temp=temp->next;
	}
	
	return m[c/2];
}

int main(){
	node* head=NULL;
	push(head,1);
	push(head,2);
	push(head,3);
	push(head,4);
	push(head,5);
	push(head,6);
//	push(head,7);
	display(head);
	node* mid=middle(head);
	display(mid);
	
}
