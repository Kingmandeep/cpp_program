#include<iostream>
#include<deque>
using namespace std;

int main(){
	deque<int> dq;
	dq.push_front(8);
	dq.push_front(9);
	dq.push_front(6);
	dq.push_back(4);
	dq.push_back(7);
	dq.push_back(1);
	while(!dq.empty()){
		cout<<dq.front()<<" ";
		dq.pop_front();
	}
}
