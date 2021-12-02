#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	string a,b;
	cin>>a>>b;
	
	if(a.size()==b.size()){
		if(a==b){
			cout<<"string are rotate of each other"<<endl;
		}else
		{
			bool flag=false;
			int l=a.length();
			while(l>0){
				string s="";
				s+=a[0];
				string r="";
				for(int i=1;i<a.size();i++){
					r+=a[i];
				}
				r+=s;
				a=r;
				if(a==b){
					flag=true;
					break;
				}
				l--;
			}
			if(flag){
				cout<<"string are rotation of each other"<<endl;
			}else{
				cout<<"string are not rotate of each other"<<endl;
			}
		}
	}else{
		cout<<"string are not rotate of each other";
	}
	
	
	
}
