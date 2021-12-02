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
node* reverse(node* &head){
	if(head==NULL || head->next==NULL){
		return head;
	}
	node* newhead=reverse(head->next);
	head->next->next=head;
	head->next=NULL;
	
	return newhead;
}
int main(){
	node* head=NULL;
	push(head,1);
	push(head,2);
	push(head,3);
	push(head,4);
	push(head,5);
	push(head,6);
	display(head);
	node* newheads=reverse(head);
	display(newheads);
}
