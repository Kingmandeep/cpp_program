#include<iostream>
using namespace std;
int main(){
	int n,x;
	cin>>n>>x;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int f;
	bool flag=false;
	int b[2];
	for(int i=0;i<n;i++){
		if(a[i]==x){
			flag=true;
			f=i;
			break;
		}
	}
	if(flag){
		b[0]=f;
	}else{
		b[0]=-1;
	}
	flag=false;
	for(int i=0;i<n;i++){
		if(a[i]==x){
			flag=true;
			f=i;	
		}
	}
	if(flag){
		b[1]=f;
	}else{
		b[1]=-1;
	}
	
	cout<<b[0]<<" "<<b[1];
}
