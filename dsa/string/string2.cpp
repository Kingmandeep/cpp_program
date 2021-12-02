#include<iostream>
using namespace std;
int main(){
	string s;
	cin>>s;
	
	string rev="";
	for(int i=s.size()-1;i>=0;i--){
		rev+=s[i];
	}
	if(rev==s){
		cout<<1<<endl;
	}else{
		cout<<0<<endl;
	}
}
