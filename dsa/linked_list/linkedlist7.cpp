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
	node* temp1=head;
	node* temp2;
	
	while(temp1!=NULL && temp1->next!=NULL){
		
		temp2=temp1;
		while(temp2->next!=NULL){
			if(temp1->data==temp2->next->data){
				temp2->next=temp2->next->next;
			}else{
				temp2=temp2->next;
			}
		}
		temp1=temp1->next;
	}
	display(head);
}
int main(){
	node* head=NULL;
	push(head,2);
	push(head,4);
	push(head,2);
	push(head,1);
	push(head,2);
	display(head);
	remove_duplicate(head);
}
