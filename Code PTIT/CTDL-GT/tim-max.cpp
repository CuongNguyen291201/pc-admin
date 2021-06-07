#include<bits/stdc++.h>
#define modulo 1000000007
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,res=0;
		cin>>n;
		vector <long long> a(n);
		for(long long i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a.begin(), a.end());
		for(long long i=0;i<n;i++){
			res += a[i]*i;
		}
		cout<<res%modulo<<endl;
		
	}
	return 0;
}
