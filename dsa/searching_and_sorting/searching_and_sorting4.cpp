#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	int count=0;
	for(int i=1;i<n;i++){
		if(i*i<n){
			count++;
		}else if(i*i>n){
			break;
		}
	}
	cout<<count<<endl;
}
