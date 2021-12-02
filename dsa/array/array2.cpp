#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t-->0){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int maxNo=INT_MIN;
		int minNo=INT_MAX;
		
		for(int i=0;i<n;i++){
			maxNo=max(maxNo,a[i]);
			minNo=min(minNo,a[i]);
		}
		cout<<"Maximum No is: "<<maxNo<<endl;
		cout<<"Minimum No is: "<<minNo<<endl;
	}
}
