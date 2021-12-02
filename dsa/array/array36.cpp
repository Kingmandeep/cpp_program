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
	
	int ab[n+m],k=0;
	for(int i=0;i<n;i++){
		ab[k]=a[i];
		k++;
	}
	
	for(int i=0;i<m;i++){
		ab[k]=b[i];
		k++;
	}
	
	 n=n+m;
	sort(ab,ab+n);
	
	if(n%2==0){
		cout<<((ab[n/2]+ab[(n/2)-1])/2)<<endl;
	}else{
		cout<<ab[n/2]<<endl;
	}
}
