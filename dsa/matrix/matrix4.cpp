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
    int s=0,p;
	for(int i=0;i<n;i++){
		int count=0;
		for(int j=0;j<m;j++){
			if(a[i][j]==1){
				count++;
			}
		}
		if(count>s){
			s=count;
			p=i;
		}
	
	}
	cout<<p<<endl;
}
