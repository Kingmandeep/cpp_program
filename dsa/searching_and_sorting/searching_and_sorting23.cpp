#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,k;
	cin>>n>>m>>k;
	int a1[n],a2[m];
	for(int i=0;i<n;i++){
		cin>>a1[i];
	}
	for(int i=0;i<m;i++){
		cin>>a2[i];
	}
	
	int a[n+m],p=0;
	for(int i=0;i<n;i++){
		a[p]=a1[i];
		p++;
	}
	for(int i=0;i<m;i++){
		a[p]=a2[i];
		p++;
	}
	n=n+m;
	sort(a,a+n);
	cout<<a[k-1]<<endl;
}
