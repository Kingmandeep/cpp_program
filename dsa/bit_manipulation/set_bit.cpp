#include<bits/stdc++.h>
using namespace std;

int set_bit(int n, int x){
	return (n | (1<<x));
}

int main(){
	int n,x;
	cin>>n>>x;
	
	cout<<set_bit(n,x)<<endl;
}
