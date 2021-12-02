#include<bits/stdc++.h>
using namespace std;
int sum_zero(int n, int a[]){
	
	int count=0;
	for(int i=0;i<n;i++){
		int sum=a[i];
		if(sum==0){
			count++;
		}
		for(int j=i+1;j<n;j++){
			sum+=a[j];
			if(sum==0){
			count++;
		    }
		}
	}
	
	return count;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<sum_zero(n,a)<<endl;
}
