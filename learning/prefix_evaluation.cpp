#include<iostream>
#include<stack>
#include<cmath>
using namespace std;
int prefixEvaluation(string s){
	stack<int> st;
	for(int i=s.length()-1;i>=0;i--){
		if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='^' ||s[i]=='%'){
			int a=st.top();
			st.pop();
			int b=st.top();
			st.pop();
			char c=s[i];
			int d;
			
			switch(c){
				case '+':
					d=a+b;
					st.push(d);
					
					break;
				case '-':
					d=a-b;
					st.push(d);
				
					break;
				case '*':
					d=a*b;
					st.push(d);
					
					break;
				case '/':
					d=a/b;
					st.push(d);
					
					break;
				case '%':
					d=a%b;
					st.push(d);
					
					break;
				case '^':
					d=pow(a,b);
					st.push(d);
					
					break;
			}
		}else{
			st.push(s[i]-'0');
		}
		
		
	}
	cout<<st.top()<<endl;
	st.pop();

}
int main(){
	string s="-+7*45+20";
	prefixEvaluation(s);
}
