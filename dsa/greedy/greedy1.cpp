#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define rep(i,a,b) for(int i=a;i<b;i++)

int main(){
	int n;
	cin>>n;
	
	vi a(n);
	rep(i,0,n)
	   cin>>a[i];
	
	int x;
	cin>>x;
	
	sort(a.begin(),a.end(),greater<int>());
	
	int ans=0;
	for(int i=0;i<n;i++){
		ans+=x/a[i];
		x-=x/a[i]*a[i];
	}
	
	cout<<ans<<endl;
	return 0;
}
