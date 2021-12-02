#include<iostream>
#include<stack>
using namespace std;
class queue{
	stack<int> s1;
	stack<int> s2;
	public:
		void push(int x){
			s1.push(x);
		}
		int pop(){
			if(s2.empty() && s1.empty()){
				cout<<"No Element is present"<<endl;
				return -1;
			}else if(s2.empty()){
				while(!s1.empty()){
					s2.push(s1.top());
					s1.pop();
				}
				
			}
			int t= s2.top();
			s2.pop();
			return t;
		}
		bool empty(){
			return (s2.empty() && s1.empty());
		}
};
int main(){
	queue q;
	q.push(5);
	q.push(2);
	q.push(1);
	q.push(6);
	q.push(8);
	q.push(7);
	q.push(5);
	q.push(4);
	
	while(!q.empty()){
		cout<<q.pop()<<" ";
		
	}
	cout<<endl;
	
}
