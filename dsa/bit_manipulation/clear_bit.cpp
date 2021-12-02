#include<bits/stdc++.h>
using namespace std;

int clear_bit(int n, int x){
	return (n & ~(1<<x));
}

int main(){
	int n,x;
	cin>>n>>x;
	cout<<clear_bit(n,x)<<endl;
}
