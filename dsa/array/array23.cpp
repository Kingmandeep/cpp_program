#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	int maxNo=INT_MIN;
	int sum;
	for(int i=0;i<n;i++){
		sum=a[i];
		maxNo=max(maxNo,sum);
		for(int j=i+1;j<n;j++){
			sum=sum*a[j];
			maxNo=max(maxNo,sum);
		}
	}
	cout<<maxNo<<endl;
}
