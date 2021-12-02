#include<bits/stdc++.h>
#include<vector>
using namespace std;

#define vi vector<vector<int> >
#define f(i,a,b) for(int i=a;i<b;i++)

int main(){
	int n;
	cin>>n;
	
	vi v;
	f(i,0,n){
		int start,end;
		cin>>start>>end;
		v.push_back({start,end});
	}
	
	sort(v[1].begin(),v[1].end());
	
	int take=1;
	int end=v[0][1];
	
	f(i,1,n){
		if(v[i][0]>=end){
			take++;
			end=v[i][1];
		}
	}
	   
	cout<<take<<endl; 
	
}
