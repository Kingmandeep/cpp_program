#include<bits/stdc++.h>
using namespace std;
int kth_element(int n, int a[],int k){
	sort(a,a+n);
	return a[k-1];
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		
	}
	int k;
	cin>>k;
	
	cout<<kth_element(n,a,k)<<endl;
}
