#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	int i=0,p;
	bool flag=false;
	while(i<n-1){
		if(a[i]>a[i+1]){
			p=i+2;
			flag=true;
			break;
		}
		i++;
	}
	if(flag){
		cout<<p<<endl;
	}else{
		cout<<1<<endl;
	}
	
}
