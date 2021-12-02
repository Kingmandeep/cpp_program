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
	
	int b[n*n],k=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			b[k]=a[i][j];
			k++;
		}
	}
	int m=n*n;
	sort(b,b+m);
	k=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			a[i][j]=b[k];
			k++;
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
