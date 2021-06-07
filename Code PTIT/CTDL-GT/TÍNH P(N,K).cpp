#include<bits/stdc++.h>
using namespace std;
const long long modulo = 1e9 + 7;

int main() {
	int t;
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		long long res=1;
		if(k>n) res=0;
		for(long long i=n-k+1;i<=n;i++){
			res=(res*i)%modulo;
		}
		cout<<res<<endl;
	}
	return 0;
}


