#include<iostream>
using namespace std;
string reverse_word(string s){
	string rev="";
	for(int i=s.length()-1;i>=0;i--){
		rev+=s[i];
	}
	return rev;
}
int main(){
	int t;
	cin>>t;
	while(t-->0){
		string s;
		cin>>s;
		cout<<reverse_word(s)<<endl;
	}
	return 0;
}
