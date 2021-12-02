#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int rem,sum=0,i=0;
	while(n>0){
		rem=n%10;
		if(rem==1){
			sum+=pow(2,i);
		}
		
		i++;
		n=n/10;
	}
	cout<<endl<<sum<<endl;
}
