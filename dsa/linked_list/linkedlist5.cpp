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
void make_loop(node* &head,int pos){
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
void first_node(node* &head){
	node* fast=head;
	node* slow=head;
	
	while(fast!=NULL && fast->next!=NULL){
		fast=fast->next->next;
		slow=slow->next;
		if(fast==slow){
			slow=head;
			if(slow==fast){
				while(slow->next!=fast){
					slow=slow->next;
				}
				cout<<slow->next->data<<endl;
				return;
				
			}else{
				while(fast->next!=slow->next){
					fast=fast->next;
					slow=slow->next;
				}
				cout<<slow->next->data<<endl;
				return;
			}
		}
	}
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
	push(head,15);
	push(head,25);
	push(head,35);
	push(head,45);
	push(head,55);
//	push(head,6);
	display(head);
	cout<<detect_loop(head)<<endl;
	make_loop(head,2);
	cout<<detect_loop(head)<<endl;
	first_node(head);
}
