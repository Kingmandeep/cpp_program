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
void display(node* &head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
node* reverse(node* &head,int pos){
	node* curr=head;
	node* prev=NULL;
	node* nextt;
	int count=0;
	while(curr!=NULL && count<pos){
		nextt=curr->next;
		curr->next=prev;
		prev=curr;
		curr=nextt;
		count++;
	}
	if(nextt!=NULL){
		head->next=reverse(nextt,pos);
	}
	
	return prev;
	
}
int main(){
	node* head=NULL;
	push(head,1);
	push(head,2);
	push(head,2);
	push(head,4);
	push(head,5);
	push(head,6);
	push(head,7);
	push(head,8);
	display(head);
	node* rev=reverse(head,4);
	display(rev);
}
