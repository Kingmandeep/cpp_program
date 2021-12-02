#include<iostream>
#include<stack>
using namespace std;
string reverse(string s){
	string rev="";
	for(int i=s.length()-1;i>=0;i--){
		if(s[i]==')'){
			rev+='(';
		}else if(s[i]=='('){
			rev+=')';
		}else{
			rev+=s[i];
		}
		
	}
	return rev;
}

int prec(char c){
	if(c=='^'){
		return 3;
	}else if(c=='* '|| c=='/'){
		return 2;
	}else if(c=='+' || c=='-'){
		return 1;
	}else{
		return -1;
	}
}

void infix_to_prefix(string s){
	stack<char> st;
	string res="";
	for(int i=0;i<s.length();i++){
		if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
			res+=s[i];
		}else if(s[i]=='('){
			st.push(s[i]);
		}else if(s[i]==')'){
			while(!st.empty() && st.top()!='('){
				res+=st.top();
				st.pop();
			}
			if(!st.empty()){
				st.pop();
			}
		}else{
			while(!st.empty() && prec(st.top())>prec(s[i])){
				res+=st.top();
				st.pop();
			}
			st.push(s[i]);
		}
	}
	while(!st.empty()){
		res+=st.top();
		st.pop();
	}
	cout<<reverse(res);
}
int main(){
//	(a-b/c)*(a/k-l)
	string s="A*(B+C/D)";
	infix_to_prefix(reverse(s));
	
}
