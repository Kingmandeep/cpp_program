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
void pop_first(node* &head){
	node* todelete=head;
	head=head->next;
	delete todelete;
	return;
}
void pop(node* &head,int val){
	if(head==NULL){
		return;
	}
	if(head->data==val){
		pop_first(head);
		return;
	}
	node* temp=head;
	while(temp->next->data!=val){
		temp=temp->next;
	}
	node* todelete=temp->next;
	temp->next=temp->next->next;
	delete todelete;
	
}

void display(node* head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
void reverse(node* &head){
	node* curr=head;
	node* prev=NULL;
	node* nextt;
	while(curr!=NULL){
		nextt=curr->next;
		curr->next=prev;
		prev=curr;
		curr=nextt;
	}
	display(prev);
	
}
int main(){
	node* head=NULL;
	push(head,1);
	push(head,2);
	push(head,3);
	push(head,4);
	push(head,5);
	push(head,6);
	push(head,7);
	display(head);
	
	reverse(head);
}
