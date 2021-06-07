#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		if(n==0 || n==1){
			cout<<"YES"<<endl;
		}
		long long int a=0,b=1,c=1;
		while(c<n){
			c=a+b;
			a=b;
			b=c;
		}
		if(c==n){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
