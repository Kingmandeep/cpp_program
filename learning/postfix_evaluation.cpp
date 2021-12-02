#include<iostream>
#include<cmath>
#include<stack>
using namespace std;
int postfix(string s){
	stack<int> st;
	
	for(int i=0;i<s.length();i++){
		if(s[i]>='0' && s[i]<='9'){
			st.push(s[i]-'0');
		}else{
			int a=st.top();
			st.pop();
			int b=st.top();
			st.pop();
			switch(s[i]){
				case '+':
					st.push(b+a);
					break;
				case '-':
					st.push(b-a);
					break;
				case '*':
					st.push(b*a);
					break;
				case '/':
					st.push(b/a);
					break;
				case '%':
					st.push(b%a);
					break;
				case '^':
					st.push(pow(b,a));
					break;
			}
		}
	}
	cout<<st.top();
}
int main(){
	string s="46+2/5*7+";
	postfix(s);
}
