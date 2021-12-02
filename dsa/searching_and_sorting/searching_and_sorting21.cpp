#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t-->0){
		int n,q;
		cin>>n>>q;
		int a[n],b[n];
		for(int i=0;i<n;i++){
			cin>>a[i]>>b[i];
		}
		
		while(q-->0){
			int k;
			cin>>k;
			bool flag=false;
			for(int i=0;i<n;i++){
				for(int j=a[i];j<=b[i];j++){
					if(k==j){
						flag=true;
					}
				}
			}
			if(flag){
				cout<<k<<endl;
			}else{
				cout<<"-1"<<endl;
			}
		}
		
	}
}
