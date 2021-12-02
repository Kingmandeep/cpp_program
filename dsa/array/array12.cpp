#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[n],b[m];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	int i=0,j=0,k=n-1;
	while(i<=k && j<m){
		if(a[i]<b[j]){
			i++;
		}else{
			swap(a[k--],b[j++]);
		}
	}
	
	sort(a,a+n);
	sort(b,b+m);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	for(int i=0;i<m;i++){
		cout<<b[i]<<" ";
	}
}
