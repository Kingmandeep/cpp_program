#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	int sum1 = a[0];
    int sum2 = 0;
    int result;
    for (int i = 1; i < n; i++){
        result = (sum1 > sum2) ? sum1 : sum2;
        sum1 = sum2 + a[i];
        sum2 = result;
    }
    if(sum1>sum2){
    	cout<<sum1<<endl;
	}else{
		cout<<sum2<<endl;
	}

}



