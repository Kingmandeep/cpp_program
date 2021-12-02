#include<iostream>
using namespace std;
void p(int n){
	if(n<1){
		return;
	}
	cout<<n;
	p(n-1);
}
 int main(){
 	int n=5;
 	p(n);
 }
