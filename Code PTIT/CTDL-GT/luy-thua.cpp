#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;
long long n,k;

long long add(long long i, long long j){
	if(j==0) return 0;
	long long tmp = add(i, j/2);
	if(j%2==1) return (tmp*2+i)%mod;
	return tmp*2%mod;
}

long long pow(long long n, long long k){
	if(k==0) return 1;
	if(k==1) return n%mod;
	long long tmp = pow(n, k/2);
	long long a = add(tmp, tmp);
	if(k%2==1) return a*n%mod;
	return a%mod;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		cout<<pow(n,k)<<endl;
	}
	return 0;
}
