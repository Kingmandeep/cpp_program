#include<iostream>
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
void push(node* &head, int val){
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
void remove_duplicate(node* &head){
	node* temp=head;
	node* curr;
	
	while(temp->next!=NULL){
		if(temp->data==temp->next->data){
			curr=temp->next->next;
			temp->next=curr;
		}else{
			temp=temp->next;
		}
	}
	display(head);
}
int main(){
	node* head=NULL;
	push(head,2);
	push(head,2);
	push(head,4);
	push(head,5);
	push(head,5);
	display(head);
	remove_duplicate(head);
}
