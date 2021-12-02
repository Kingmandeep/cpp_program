#include<bits/stdc++.h>
using namespace std;
int find_pair(int n,int a[], int x){
	
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if((a[i]-a[j]==x) || (a[j]-a[i]==x)){
				return 1;
			}
		}
	}
	return -1;
}
int main(){
	int n,x;
	cin>>n>>x;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<find_pair(n,a,x)<<endl;
}
