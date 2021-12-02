#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	int b[n][n];
	
	for(int i=0;i<n;i++){
		for(int j=n-1;j>=0;j--){
			b[i][n-1-j]=a[j][i];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
}
