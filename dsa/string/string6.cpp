#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,a,b;
	cin>>s>>a>>b;
	
	string r="";
	r+=a;
	r+=b;
	
	sort(s.begin(),s.end());
	
	sort(r.begin(),r.end());
	
	bool flag=true;
	for(int i=0;i<s.length();i++){
		if(r[i]!=s[i]){
			flag=false;
			break;
		}
	}
	cout<<flag<<endl;
}
