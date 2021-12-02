#include<bits/stdc++.h>
using namespace std;


int get_bit(int n, int x){
	return (n & (1<<x))!=0;
}

int main(){
	int n,x;
	cin>>n>>x;
	
	cout<<get_bit(n,x);
}
