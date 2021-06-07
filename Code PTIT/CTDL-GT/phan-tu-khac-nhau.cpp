#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		vector<long long> a(n), b(n-1);
		for(long long i=0;i<n;i++){
			cin>>a[i];	
		}
		for(long long i=0;i<n-1;i++){
			cin>>b[i];	
		}
		long long res=n;
		for(long long i=0;i<n-1;i++){
			if(a[i]!=b[i]){
				res=i+1;
				break;
			}
		}
		cout<<res<<endl;
	}
	return 0;
}
