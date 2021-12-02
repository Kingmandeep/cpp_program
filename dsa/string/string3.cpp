#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	
            
	sort(s.begin(),s.end());
	
	string a[s.size()];
	int k=0;
	int b[s.size()];
	int i=0;
	while(i<s.size()-1){
		int count=1;
		if(s[i]==s[i+1]){
			while(s[i]==s[i+1]){
			count++;
			i++;
		   }
	    	if(count>1){
			a[k]=s[i-1];
			b[k]=count;
			k++;
	    	}
		}else{
			i++;
		}
		
	}
	
	for(int i=0;i<k;i++){
		cout<<a[i]<<" "<<b[i]<<endl;
	}
}
