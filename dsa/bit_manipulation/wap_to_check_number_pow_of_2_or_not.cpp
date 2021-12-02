#include<bits/stdc++.h>
using namespace std;

bool binary_number(int n){
	return (n & (n-1))==0;
	
}
int main(){
	int n;
	cin>>n;
	
	cout<<binary_number(n);
	
	
}
