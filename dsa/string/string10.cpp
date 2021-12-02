#include<iostream>
using namespace std;
int main(){
	string s="abcd";
	for(int i=0;i<s.length();i++){
		string r="";
		r+=s[i];
		cout<<r<<" ";
		for(int j=i+1;j<s.length();j++){
			r+=s[j];
			cout<<r<<" ";
		}
	}
}
