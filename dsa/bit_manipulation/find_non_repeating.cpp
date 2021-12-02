#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	int xorsum=0;
	for(int i=0;i<n;i++){
		xorsum=xorsum^a[i];
		if(xorsum>0){
			cout<<xorsum<<" ";
		}
	}
	
	cout<<endl<<xorsum<<endl;
}
