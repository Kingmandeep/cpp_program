#include<iostream>
using namespace std;
int main(){
	int r,c;
	cin>>r>>c;
	int a[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>a[i][j];
		}
	}
	
	int s_r=0,s_c=0,e_r=r-1,e_c=c-1;
	int ab[r*c],k=0;
	while(s_r<=e_r || s_c<=e_c){
        
        for(int i=s_c;i<=e_c;i++){
            ab[k]=a[s_r][i];
            k++;
        }
        s_r=s_r+1;
        for(int i=s_r;i<=e_r;i++){
            ab[k]=a[i][e_c];
            k++;
        }
        e_c--;
        for(int i=e_c;i>=s_c;i--){
            ab[k]=a[e_r][i];
            k++;
        }
        e_r--;
        for(int i=e_r;i>=s_r;i--){
            ab[k]=a[i][s_c];
            k++;
        }
       
        s_c++;
    }
     for(int i=0;i<k;i++){
    	cout<<ab[i]<<" ";
	    }
	    cout<<endl;
    
    
	
}
