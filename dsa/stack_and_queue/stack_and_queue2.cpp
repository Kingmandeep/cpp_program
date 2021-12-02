#include<iostream>
#define n 20
using namespace std;

class queue{
	int* arr;
	int front;
	int back;
	public:
		queue(){
			arr=new int[n];
			front=-1;
			back=-1;
		}
		
		void push(int val){
			if(back==n-1){
				cout<<"NO space"<<endl;
				return;
			}
			
			back++;
			arr[back]=val;
			
			if(front==-1){
				front++;
			}
			return;
		}
		void pop(){
			if(front==-1 ||  front>back){
				cout<<"NO element"<<endl;
				return;
			}
			
			front++;
			return;
		}
		int top(){
			if(front==-1 ||  front>back){
				cout<<"NO element"<<endl;
				return -1;
			}
			
			return arr[front];
		}
		
		bool empty(){
			return (front==-1 || front>back);
		}
};
int main(){
	queue qt;
	qt.push(1);
	qt.push(2);
	qt.push(3);
	qt.push(4);
	qt.push(5);
	qt.push(6);
	
	while(!qt.empty()){
		
		cout<<qt.top()<<" ";
		qt.pop();
	}
}
