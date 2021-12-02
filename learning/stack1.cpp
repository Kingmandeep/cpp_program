#include<iostream>
using namespace std;
#define n 20
class stack{
	int* arr;
	int t;
	public:
		stack(){
			arr=new int[n];
			t=-1;
		}
		void push(int x){
			if(t==n-1){
				cout<<"no space"<<endl;
			}
			t++;
			arr[t]=x;
		}
		void pop(){
			if(t==-1 ){
				cout<<"No element"<<endl;
				return;
			}
			t--;
		}
		int top(){
			if(t==-1 ){
				cout<<"No element"<<endl;
				return -1;
			}
			return arr[t];
		}
		bool empty(){
			return t==-1;
		}
};
int main(){
	stack st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(5);
	while(!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}
	cout<<endl;
}




