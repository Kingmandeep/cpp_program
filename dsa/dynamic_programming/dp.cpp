#include<bits/stdc++.h>
using namespace std;


#define rep(i,a,b) for(int i=a;i<b;i++)
#define vi vector<int>
const int N=1e7+2, MOD=1e9+7;




int main(){
	
	int n;
	cin>>n;
	
	vi dp(n+1);
	
	dp[0]=0;
	dp[1]=0;
	dp[2]=1;
	
	for(int i=3;i<=n;i++){
		dp[i]=dp[i-1]+dp[i-2];
	}
	
	cout<<dp[n]<<endl;
	return 0;
	
}
