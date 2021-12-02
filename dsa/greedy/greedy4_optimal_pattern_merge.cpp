#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define rep(i,a,b) for(int i=a;i<b;i++)

int main(){
	int n;
	cin>>n;
	
	vi v(n);
	
	rep(i,0,n){
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	int cost=0;
	int total=v[0];
	
	
	
	rep(i,1,n){
		total+=v[i];
		
		cost+=total;
	}
	
	cout<<total<<"  "<<cost<<endl;
	return 0;
}
