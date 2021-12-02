#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++){
		int mul=1;
		for(int j=0;j<n;j++){
			if(i!=j){
				mul=mul*a[j];
			}
		}
		cout<<mul<<" ";
	}
	
}
