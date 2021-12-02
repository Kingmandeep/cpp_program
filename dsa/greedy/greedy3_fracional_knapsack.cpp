#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pi pair<int,int>
#define vii vector<pi>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second


bool compare(pi p1, pi p2){
	
	double v1=(double)p1.ff/p1.ss;
	double v2=(double)p2.ff/p2.ss;
	
	return v1>v2;
}

int main(){
	int n;
	cin>>n;
	
	vii a(n);
	rep(i,0,n){
		cin>>a[i].ff>>a[i].ss;
	}
	
	int x;
	cin>>x;
	sort(a.begin(),a.end(),compare);
	int ans=0;
	rep(i,0,n){
		if(x>=a[i].ss){
			ans+=a[i].ff;
			x-=a[i].ss;
			continue;
		}
		
		double vw=(double) a[i].ff/a[i].ss;
		ans+=vw*x;
		x=0;
		break;
	}
	
	cout<<ans<<endl;
	return 0;
}
