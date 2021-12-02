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
void make_loop(node* &head, int pos){
	node* temp=head;
	node* start;
	int count=1;
	
	while(temp->next!=NULL){
		if(count==pos){
			start=temp;
		}
		temp=temp->next;
		count++;
	}
	temp->next=start;
}
bool detect_loop(node* &head){
	node* fast=head;
	node* slow=head;
	
	while(fast!=NULL && fast->next!=NULL){
		fast=fast->next->next;
		slow=slow->next;
		if(fast==slow){
			return true;
		}
	}
	return false;
}
void display(node* &head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
int main(){
	node* head=NULL;
	push(head,1);
	push(head,2);
	push(head,8);
	push(head,6);
	push(head,5);
	push(head,9);
	display(head);
	cout<<"detect_loop "<<detect_loop(head)<<endl;
	make_loop(head,4);
	cout<<"detect_loop "<<detect_loop(head)<<endl;
//	display(head);
}
