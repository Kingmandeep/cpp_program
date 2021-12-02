#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int r,c;
	cin>>r>>c;
	int a[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>a[i][j];
		}
	}
	int b[r*c],k=0;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			b[k]=a[i][j];
			k++;
		}
	}
	int n=r*c;
	sort(b,b+n);
	if(n%2==0){
		cout<<(b[n/2]+b[(n/2)-1])/2<<endl;
	}else{
		cout<<b[n/2]<<endl;
	}
}
