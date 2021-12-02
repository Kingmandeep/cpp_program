#include<bits/stdc++.h>
using namespace std;

int update_bit(int n, int x, int y){
	if(y==1){
		return (n | (1<<x));
	}else{
		return (n & ~(1<<x));
		
	}
}
  

int main(){
	int n,x,y;
	cin>>n>>x>>y;
	
	cout<<update_bit(n,x,y);
}
