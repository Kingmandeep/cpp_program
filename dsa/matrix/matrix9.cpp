#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	int p;
	cin>>p;
	
	int b[n*n],k=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			b[k]=a[i][j];
			k++;
		}
	}
	int m=n*n;
	sort(b,b+m);
	cout<<b[p-1];
}
