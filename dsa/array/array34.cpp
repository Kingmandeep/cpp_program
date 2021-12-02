#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t-->0){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		bool flag=true;
		for(int i=0;i<n;i++){
			
			int p=a[i],q=a[i];
			int rev=0,rem;
			while(q>0){
				rem=q%10;
				rev=rev*10+rem;
				q=q/10;
			}
			if(rev!=p){
				flag=false;
			}
		}
		if(flag){
			cout<<true<<endl;
		}else{
			cout<<false<<endl;
		}
	}
}
