#include<iostream>

#define n 20
using namespace std;

class stack{
	int* arr;
	int t;
	public:
		stack(){
			arr=new int[n];
			t=-1;
		}
		
		void push(int val){
			if(t==n-1){
				cout<<"NO space"<<endl;
				return;
			}
			t++;
			arr[t]=val;
			
		}
		void pop(){
			if(t==-1){
				cout<<"NO element"<<endl;
				return;
			}
			t--;
		}
		int top(){
			if(t==-1){
				cout<<"NO element"<<endl;
				return -1;
			}
			return arr[t];
		}
		bool empty(){
			return t==-1;
		}
		
		int middle(){
			if(t==-1){
				return -1;
			}
			
			return arr[t/2];
		}
};
int main(){
	stack st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(5);
	st.push(6);
	cout<<st.middle()<<endl;
	while(!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}
	
}
