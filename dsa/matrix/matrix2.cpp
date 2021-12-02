#include<iostream>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	int t;
	cin>>t;
	bool flag=false;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(t==a[i][j]){
				flag=true;
			}
		}
	}
	if(flag){
		cout<<"true"<<endl;
	}else{
		cout<<"false"<<endl;
	}
}
