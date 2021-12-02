#include<iostream>
#include<stack>
using namespace std;
void balance(string s){
	stack<char> st;
	bool flag=true;
	for(int i=0;i<s.length();i++){
		if(s[i]=='(' || s[i]=='{' || s[i]=='['){
			st.push(s[i]);
		}else{
			if((s[i]==')' && st.top()=='(') || ( s[i]=='}' && st.top()=='{') || (s[i]==']' && st.top()=='[')){
				st.pop();
			}else{
				flag=false;
			}
		}
	}
	if(st.empty() && flag){
		cout<<"Balanced"<<endl;
	}else{
		cout<<"Unbalanced"<<endl;
	}
}
int main(){
	string s="[()]{}{[()()]()}";
	balance(s);
}
