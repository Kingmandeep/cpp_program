#include<bits/stdc++.h>
using namespace std;
int search(int n, int a[], int k, int x){
	int i=0;
	while(i<n){
		if(a[i]==x){
			return i;
		}
		
		i=i+max(1,abs(a[i]-x)/k);
	}
	return -1;
}
int main(){
	int n,k,x;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>k>>x;
	
	cout<<search(n,a,k,x);
}
