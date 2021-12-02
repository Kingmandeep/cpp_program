#include<iostream>
using namespace std;
int search(int a[], int l, int n, int x){
	if(l>n){
		return -1;
	}
	int mid=(l+n)/2;
	if(a[mid]==x){
		return mid;
	}
	if(a[l]<=a[mid]){
		if(x>=a[l] && x<=a[mid]){
			return search(a,l,mid-1,x);
		}
		return search(a,mid+1,n,x);
	}
	
	if(x>=a[mid] && x<=a[n]){
		return search(a,mid+1,n,x);
	}
	return search(a,l,mid-1,x);
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int x;
	cin>>x;
	cout<<search(a,0,n,x);
}
