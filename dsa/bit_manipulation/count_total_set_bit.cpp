#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	int sum=0;
	while(n){
		int p=n;
		int count=0;
		while(n){
			n=(n&(n-1));
			count++;
		}
		sum=sum+count;
		n=p;
		n--;
	}
	
	cout<<sum<<endl;
}
