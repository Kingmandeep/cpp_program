#include<bits/stdc++.h>
using namespace std;
int maxsubarray(int n,int a[]){
	
	int maxNo=INT_MIN;
        for(int i=0;i<n;i++){
            int sum=a[i];
            maxNo=max(maxNo,sum);
            for(int j=i+1;j<n;j++){
                sum+=a[j];
                maxNo=max(maxNo,sum);
            }
        }
        return maxNo;
	
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	cout<<maxsubarray(n,a)<<endl;
}
