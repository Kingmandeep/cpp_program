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
	
//	1 2 3
//	4 5 6
//	7 8 9
//	
//	00 01 02
//	10 11 12
//	20 21 22
//	
//	02  12  22
//	01  11 21
//	00  10  20
//	
//	3 6 9
//	2 5 8
//	1 4 7


	
	
	for(int i=n-1;i>=0;i--){
	
		for(int j=0;j<n;j++){
			cout<<a[j][i]<<" ";
		}
		cout<<endl;
		
	}
	
	
}
