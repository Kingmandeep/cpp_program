#include<iostream>
using namespace std;
int main(){
	int n,x;
	cin>>n>>x;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	bool flag=false;
	for(int i=0;i<n-2;i++){
		for(int j=i+1;j<n-1;j++){
			for(int k=j+1;k<n;k++){
				int sum=a[i]+a[j]+a[k];
				if(x==sum){
					flag=true;
				}
			}
		}
	}
	cout<<flag<<endl;
}
