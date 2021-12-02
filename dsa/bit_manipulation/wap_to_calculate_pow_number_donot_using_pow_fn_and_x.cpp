#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	if(n<0){
		n=-n;
	}
	int sum=0;
	for(int i=1;i<=n;i++){
		sum+=n;
	}
	
	cout<<sum<<endl;
}
